main : main.c ascii.h ascii.o einmaleins.o einmaleins.h binary.o binary.h
	gcc -o main main.c ascii.o einmaleins.o binary.o

ascii.o : ascii.c
	gcc -c ascii.c

einmaleins.o : einmaleins.c
	gcc -c einmaleins.c

binary.o : binary.c
	gcc -c binary.c

clear :
	rm main *.o
