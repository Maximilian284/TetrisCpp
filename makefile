main: main.o grid.o functions.o block.o
	gcc -o main main.o grid.o functions.o block.o -lncurses
	rm -f *.o

main.o: main.cpp
	gcc -c main.cpp

grid.o: grid.cpp
	gcc -c grid.cpp

functions.o: functions.cpp
	gcc -c functions.cpp

block.o: block.cpp
	gcc -c block.cpp

cleano:
	rm -f *.o 

run:
	./main