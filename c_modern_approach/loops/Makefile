# Define the compiler and the flags
CC = gcc
CFLAGS = -Wall -g

# Find all .c files in the current directory
SRCS = $(wildcard *.c)

# Define the executables
EXES = $(SRCS:.c=)

# Default target
all: $(EXES)

# Rule to create each executable
%: %.c
	$(CC) $(CFLAGS) $< -o $@

# Clean up
clean:
	rm -f $(EXES)

