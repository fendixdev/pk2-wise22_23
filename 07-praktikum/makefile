main.o : LinkedList.o Node.o LinkedList.h
	g++ main.cpp LinkedList.o Node.o -o main

LinkedList.o : LinkedList.cpp LinkedList.h Node.o Node.h
	g++ -c LinkedList.cpp

Node.o : Node.cpp Node.h
	g++ -c Node.cpp

clear:
	rm *.o main