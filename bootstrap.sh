#!/bin/bash
( cd bootstrap && ./make.sh )
( cd srmake && ./make.sh )
( cd lexgen && ./make.sh )
( cd compiler && ./makeself.sh )
