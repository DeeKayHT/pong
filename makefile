# Pong Makefile for GCC

INCLUDE = -I ./include

LFLAGS = -lsfml-graphics -lsfml-window -lsfml-system
LIBS = ./lib/linux/libsfml-graphics.so.1.6
LIBS += ./lib/linux/libsfml-system.so.1.6
LIBS += ./lib/linux/libsfml-window.so.1.6

all: pong

pong: $(LIBS)
	mkdir -p ./bin/linux/
	g++ ./src/main.cpp -o ./bin/linux/pong $(LFLAGS)