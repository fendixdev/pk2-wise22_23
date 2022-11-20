main : main.c countspace.h countspace.o min.o min.h stringcat.h stringcat.o fakultaet.o fakultaet.h binomialkoeffizienten.o binomialkoeffizienten.h
	gcc main.c countspace.o min.o stringcat.o fakultaet.o binomialkoeffizienten.o -o main

countspace.o: countspace.c
	gcc countspace.c -c

min.o: min.c
	gcc min.c -c

stringcat.o: stringcat.c
	gcc stringcat.c -c

fakultaet.o: fakultaet.c
	gcc fakultaet.c -c

binomialkoeffizienten.o: binomialkoeffizienten.c
	gcc binomialkoeffizienten.c -c

clear:
	rm *.o main