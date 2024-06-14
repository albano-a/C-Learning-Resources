CC = gcc
CFLAGS = `pkg-config --cflags gtk+-3.0`
LIBS = `pkg-config --libs gtk+-3.0`
TARGET = main

all: $(TARGET)

$(TARGET): main.o
	$(CC) -o $(TARGET) main.o $(LIBS)

main.o: main.c
	$(CC) -c main.c $(CFLAGS)

clean:
	rm -f $(TARGET) main.o
