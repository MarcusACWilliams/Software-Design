#!/bin/bash

EXEC=main
SRC=main.c
COUNTER=250

while [ $COUNTER -lt 251 ]; do

	./main COUNTER 1

	let COUNTER=COUNTER+1
done
