main: main.cpp punkt.o
	g++ main.cpp -o main punkt.o -std=c++11

punkt.o: punkt.cpp punkt.h
	g++ punkt.cpp -c -std=c++11

clean:
	rm -f *.o main