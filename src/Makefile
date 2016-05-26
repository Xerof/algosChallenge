all: main
clean:
		rm -f main *.o
.PHONY: clean all

CC=g++
CFLAGS= -Wall -Werror
LIBS=

main: main.o
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)
