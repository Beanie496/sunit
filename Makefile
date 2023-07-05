CC = cc
CFLAGS = -pedantic -Wall -O2


.PHONY: all help clean

default: all

all: test

help:
	@echo "To compile, type:"
	@echo ""
	@echo "make [target]"
	@echo ""
	@echo "Where target is one of the following:"
	@echo ""
	@echo "all:              > Compile and link the source file"
	@echo "help:             > Print this message"
	@echo "clean:            > Clean up"
	@echo ""
	@echo "If no target is given, it will use \"all\""

clean:
	rm -f test

test: test.c sunit.h
	+$(CC) $(CFLAGS) -o $@ test.c
