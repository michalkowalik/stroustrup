CC=g++
CFLAGS=-I. -Wall -std=gnu++11
DEPS=stdafx.h
OBJ=Introduction.o Vector.o User.o TemplateVector.o

all: intro

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

intro: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm *o *exe
