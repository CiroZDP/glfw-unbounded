# Project settings
SOURCES  = %.c
INCLUDES = -I"../include/"

# Compiler settings
CC      = gcc
CFLAGS += -fPIC -shared

all:	$(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) $(INCLUDES)

.PHONY all
