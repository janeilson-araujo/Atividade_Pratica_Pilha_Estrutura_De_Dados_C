CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = pilha
SOURCES = main.c pilha.c
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $(OBJECTS) -lm

%.o: %.c pilha.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

.PHONY: all clean run

run: $(TARGET)
	./$(TARGET)