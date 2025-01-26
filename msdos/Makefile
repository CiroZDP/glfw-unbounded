# Project settings
SOURCES  = core.c
INCLUDES = -I"../include/"

# Compiler settings
CC      = gcc
CFLAGS += -shared

all:	$(SOURCES)
	$(CC) -c $(SOURCES) -o glfw.o
	$(CC) -shared -o libglfw.so glfw.o


.PHONY: all
