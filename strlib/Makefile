CC=gcc

# Using other's lib (arith11)
strlib : strlib.o strlen.o strcat.o strcpy.o strcmp.o strrev.o
	$(CC) -o strlib strlib.o strlen.o strcat.o strcpy.o strcmp.o strrev.o
strlib.o : strlib.c
	$(CC) -c -o strlib.o strlib.c
strlen.o : str_len.c
	$(CC) -c -o strlen.o str_len.c
strcat.o : str_cat.c
	$(CC) -c -o strcat.o str_cat.c
strcpy.o : str_cpy.c
	$(CC) -c -o strcpy.o str_cpy.c
strcmp.o : str_cmp.c
	$(CC) -c -o strcmp.o str_cmp.c
strrev.o : str_rev.c
	$(CC) -c -o strrev.o str_rev.c

# To create lib using make command
lib: strlen.o strcat.o strcpy.o strcmp.o strrev.o
	ar crv libstringfun.a strlen.o strcat.o strcpy.o strcmp.o strrev.o

clean :
	rm -rf *.o libstringfun.a strlib                               