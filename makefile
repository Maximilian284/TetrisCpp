all: main

main: main.o grid.o functions.o block.o menu.o
	g++ -o main main.o grid.o functions.o block.o menu.o -lncurses
	rm *.o

main.o: classes/main.cpp
	g++ -c classes/main.cpp 

grid.o: classes/grid.cpp
	g++ -c classes/grid.cpp 

functions.o: classes/functions.cpp
	g++ -c classes/functions.cpp 

block.o: classes/block.cpp
	g++ -c classes/block.cpp 

menu.o: classes/menu.cpp
	g++ -c classes/menu.cpp 

clean:
	rm -f *.o

all_done:
	rm -f main.exe
	g++ -c main.cpp
	g++ -c classes/grid.cpp
	g++ -c classes/functions.cpp
	g++ -c classes/block.cpp  
	g++ -c classes/menu.cpp 
	g++ -o main main.o grid.o functions.o block.o menu.o -lncurses
	rm  *.o 


# main: main.o grid.o functions.o block.o menu.o 
# gcc -o main main.o grid.o functions.o block.o menu.o -lncurses
#	rm -f *.o	

#main.o: main.cpp
#	gcc -c main.cpp

#grid.o: grid.cpp
#	gcc -c grid.cpp

#functions.o: functions.cpp
#	gcc -c functions.cpp

#block.o: block.cpp
#	gcc -c block.cpp

#menu.o: menu.cpp
#	gcc -c menu.cpp

#cleano:
#	rm -f *.o 

#run:
#	./main

# g++ -c classes/grid.cpp
# g++ -c classes/functions.cpp
# g++ -c classes/block.cpp  
# g++ -c classes/menu.cpp 
# g++ -o main main.o grid.o functions.o block.o menu.o -lncurses
# rm  *.o  
## start main.exe
