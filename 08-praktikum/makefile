main : main.cpp Audio.h Audio.o Medium.h Medium.o Bild.h Bild.o
	g++ -o main main.cpp Audio.o Medium.o Bild.o

Medium.o : Medium.cpp Medium.h
	g++ -c Medium.cpp

Audio.o : Audio.cpp Audio.h Medium.h
	g++ -c Audio.cpp

Bild.o : Bild.cpp Bild.h Medium.h
	g++ -c Bild.cpp

clean:
	rm -f *.o main