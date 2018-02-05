#!/bin/bash

EXEC=main
SRC=main.c
COUNTER=9

while [ $COUNTER -lt 30 ]; do

	./main $COUNTER 1

	let COUNTER=$COUNTER+1
done
