.PHONY: clean all
CC=gcc
FLAGS= -Wall -g

my_math.o: my_mat.c my_mat.h
	$(CC) -c $(FLAGS) my_mat.c

main.o: main.c my_mat.h
	$(CC) -c $(FLAGS) main.c

connections: main.o my_mat.o 
	gcc -Wall -o connections main.o my_mat.o

all: connections

clean:
	rm *.o connections