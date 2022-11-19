main : main.c countspace.h countspace.o min.o min.h stringcat.h stringcat.o
	gcc main.c countspace.o min.o stringcat.o -o main

countspace.o: countspace.c
	gcc countspace.c -c

min.o: min.c
	gcc min.c -c

stringcat.o: stringcat.c
	gcc stringcat.c -c

clear:
	rm *.o main