#!/bin/bash

EXEC=main
SRC=main.c
COUNTER=50

while [ $COUNTER -lt 3000 ]; do

	./main $COUNTER 1

	let COUNTER=$COUNTER+2

done
