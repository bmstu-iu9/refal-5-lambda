
здесь текст должен остаться

/*GEN:TOKENS

  :digits: = '0123456789'.
  :space: = '\t\n '.
  Root = Space .
  Space =
    :space: !- Space |
    :digits: Digit |
    '/' Comment |
    !EOF.
  Digit = :digits: Digit | !Digit Space .
  Comment =
    '\n' !- Root |
    :Any: Comment .

GEN:END*/

Root {
  (e.Accum) e.Text = <Space (e.Accum) e.Text>;
  (e.Accum) s.Unexpected e.Text = 
    (TokenUnexpected s.Unexpected) <Root () e.Text>;
  (e.Accum) = (TokenAccum e.Accum) (TokenUnexpectedEOF);
}

Space {
  (e.Accum) '\t' e.Text = <Space () e.Text>;
  (e.Accum) '\n' e.Text = <Space () e.Text>;
  (e.Accum) ' ' e.Text = <Space () e.Text>;
  (e.Accum) '0' e.Text =
    <Digit (e.Accum '0') e.Text>;
  (e.Accum) '1' e.Text =
    <Digit (e.Accum '1') e.Text>;
  (e.Accum) '2' e.Text =
    <Digit (e.Accum '2') e.Text>;
  (e.Accum) '3' e.Text =
    <Digit (e.Accum '3') e.Text>;
  (e.Accum) '4' e.Text =
    <Digit (e.Accum '4') e.Text>;
  (e.Accum) '5' e.Text =
    <Digit (e.Accum '5') e.Text>;
  (e.Accum) '6' e.Text =
    <Digit (e.Accum '6') e.Text>;
  (e.Accum) '7' e.Text =
    <Digit (e.Accum '7') e.Text>;
  (e.Accum) '8' e.Text =
    <Digit (e.Accum '8') e.Text>;
  (e.Accum) '9' e.Text =
    <Digit (e.Accum '9') e.Text>;
  (e.Accum) '/' e.Text =
    <Comment (e.Accum '/') e.Text>;
  (e.Accum) =  (EOF e.Accum);
  (e.Accum) s.Unexpected e.Text = 
    (TokenUnexpected s.Unexpected) <Root () e.Text>;
  (e.Accum) = (TokenAccum e.Accum) (TokenUnexpectedEOF);
}

Digit {
  (e.Accum) '0' e.Text =
    <Digit (e.Accum '0') e.Text>;
  (e.Accum) '1' e.Text =
    <Digit (e.Accum '1') e.Text>;
  (e.Accum) '2' e.Text =
    <Digit (e.Accum '2') e.Text>;
  (e.Accum) '3' e.Text =
    <Digit (e.Accum '3') e.Text>;
  (e.Accum) '4' e.Text =
    <Digit (e.Accum '4') e.Text>;
  (e.Accum) '5' e.Text =
    <Digit (e.Accum '5') e.Text>;
  (e.Accum) '6' e.Text =
    <Digit (e.Accum '6') e.Text>;
  (e.Accum) '7' e.Text =
    <Digit (e.Accum '7') e.Text>;
  (e.Accum) '8' e.Text =
    <Digit (e.Accum '8') e.Text>;
  (e.Accum) '9' e.Text =
    <Digit (e.Accum '9') e.Text>;
  (e.Accum) e.Text =
    (Digit e.Accum) <Space () e.Text>;
  (e.Accum) s.Unexpected e.Text = 
    (TokenUnexpected s.Unexpected) <Root () e.Text>;
  (e.Accum) = (TokenAccum e.Accum) (TokenUnexpectedEOF);
}

Comment {
  (e.Accum) '\n' e.Text = <Root () e.Text>;
  (e.Accum) s.Any e.Text =
    <Comment (e.Accum s.Any) e.Text>;
  (e.Accum) s.Unexpected e.Text = 
    (TokenUnexpected s.Unexpected) <Root () e.Text>;
  (e.Accum) = (TokenAccum e.Accum) (TokenUnexpectedEOF);
}
