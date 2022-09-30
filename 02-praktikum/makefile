main : main.c charToUpperCase.h charToUpperCase.o upper.o
	gcc -o main main.c charToUpperCase.o upper.o

charToUpperCase.o : charToUpperCase.c
	gcc -c charToUpperCase.c

upper.o : upper.c upper.h
	gcc -c upper.c

clear :
	rm main *.o