CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = pilha

all:
	$(CC) $(CFLAGS) main.c pilha.c -o $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all clean run

run:
	./$(TARGET)