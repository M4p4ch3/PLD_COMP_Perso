#!/bin/bash
CLASSPATH="./antlr-4.7.1-complete.jar:." \
exec java -jar ./antlr-4.7.1-complete.jar "$@"
