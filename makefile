.PHONY: clean all
CC=gcc
FLAGS= -Wall -g

my_math.o: my_math.c my_math.h
	$(CC) -c $(FLAGS) my_math.c

main.o: main.c my_math.h
	$(CC) -c $(FLAGS) main.c

connections: main.o my_math.o 
	gcc -Wall -o connections main.o my_math.o

all: connections

clean:
	rm *.o connections