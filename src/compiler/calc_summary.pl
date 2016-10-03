sub get_metrics {
  my $input = shift;
  my %metrics;
  my %squares;
  my %count;
  open INPUT, $input || die "can't open: $!";

  while (<INPUT>) {
    if (/^([^:]*): ([0-9.]*) seconds/) {
      $metrics{$1} += $2;
      $squares{$1} += $2 * $2;
      ++$count{$1};
    }
  }
  print;

  close INPUT || die "close failed: $! $?";

  my $total = 0;
  for my $i (values %count) {
    $total = $i if $i > $total;
  }

  for my $i (keys %metrics) {
    $MX = $metrics{$i} / $total;
    $DX = $squares{$i} / $total - $MX*$MX;
    $metrics{$i} = [$MX, sqrt($DX)];
  }

  return \%metrics;
}

sub justify {
  my $target = shift;
  my $sample = shift;

  for my $i (keys %$sample) {
    $target->{$i} = [0.0, 0.0] if not $target->{$i};
  }
}

$slow = get_metrics($ARGV[0]);
$fast = get_metrics($ARGV[1]);
justify($slow, $fast);
justify($fast, $slow);

sub print_bench {
  my $result = shift;
  for my $i (sort keys %$result) {
    printf("%s %.3f +- %.3f\n", $i, $result->{$i}->[0], $result->{$i}->[1]);
  }
  print "\n";
}

print_bench($slow);
print_bench($fast);

sub div {
  my $x = shift;
  my $y = shift;
  if ($y) {
    return 100 * ($x / $y - 1);
  } else {
    return 0;
  }
}

sub max {
  my $items = shift;
  my $max = 0;
  for (values %$items) {
    $max = $_->[0] if $max < $_->[0];
  }
  return $max;
}

sub print_summary {
  my $slow = shift;
  my $fast = shift;

  my $max_slow = max($slow);
  my $max_fast = max($fast);

  my $found = 1;
  my @keys;
  my $oldmaxkey = "";
  my $oldmaxsum = $max_slow + $max_fast + 1;
  while ($found) {
    my $maxkey = "";
    my $maxsum = 0;
    $found = 0;

    for my $k (keys %$slow) {
      my $cursum = $slow->{$k}->[0] + $fast->{$k}->[0];
      if (
        ($cursum > $maxsum || $cursum == $maxsum && $k < $maxkey)
        && ($cursum < $oldmaxsum || $cursum == $oldmaxsum && $k > $oldmaxkey)
      ) {
        $maxkey = $k;
        $maxsum = $cursum;
        $found = 1;
      }
    }

    $oldmaxkey = $maxkey;
    $oldmaxsum = $maxsum;

    if ($found) {
      push @keys, $maxkey;
    }
  }

  my $threshold_appear = 0;
  for my $i (@keys) {
    my $pslow = 100.0 * $slow->{$i}->[0] / $max_slow;
    my $pfast = 100.0 * $fast->{$i}->[0] / $max_fast;
    my $spslow = sprintf("(%.1f %%)", $pslow);
    my $spfast = sprintf("(%.1f %%)", $pfast);

    my $ratio = div($fast->{$i}->[0], $slow->{$i}->[0]);
    if ($pslow < 5 || $pfast < 5) {
      $ratio = sprintf("(%+.1f %%)", $ratio);
      if (! $threshold_appear) {
        print "---------------------------------------------\n";
        $threshold_appear = 1;
      }
    } else {
      $ratio = sprintf("%+.1f %% ", $ratio);
    }

    my $slowL = $slow->{$i}->[0] - $slow->{$i}->[1];
    my $slowH = $slow->{$i}->[0] + $slow->{$i}->[1];
    my $fastL = $fast->{$i}->[0] - $fast->{$i}->[1];
    my $fastH = $fast->{$i}->[0] + $fast->{$i}->[1];

    my $L = "0";
    my $R = "INF";
    $L = sprintf("%+.1f %%", div($fastL, $slowH)) if $slowL > 0;
    $R = sprintf("%+.1f %%", div($fastH, $slowL)) if $fastL > 0;

    printf(
      "%-43s | %7.3f+-%.3f %9s | %7.3f+-%.3f %9s | %10s (%s..%s)\n",
      $i,
      $slow->{$i}->[0], $slow->{$i}->[1], $spslow,
      $fast->{$i}->[0], $fast->{$i}->[1], $spfast,
      $ratio, $L, $R
    );
  }
}

print_summary($slow, $fast);
