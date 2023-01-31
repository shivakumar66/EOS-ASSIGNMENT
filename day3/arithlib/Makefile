CC=gcc

# Using other's lib (arith11)
main : main.o mul.o div.o
	$(CC) -o main main.o mul.o div.o -larith11 -L.
main.o : main.c
	$(CC) -c -o main.o main.c
mul.o : mul.c
	$(CC) -c -o mul.o mul.c
div.o : div.c
	$(CC) -c -o div.o div.c

# To create lib using make command
lib: mul.o div.o
	ar crv libarith.a mul.o div.o 

clean :
	rm -rf *.o libarith.a main	