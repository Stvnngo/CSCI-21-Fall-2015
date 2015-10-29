FLAGS = -Wall -Wextra -pedantic

pc19: pc19.o SList.o SLNode.o
	g++ $(FLAGS) -o pc19 pc19.o SList.o SLNode.o

pc19.o: pc19.cpp 
	g++ $(FLAGS) -c pc19.cpp

SList.o: SList.h SList.cpp 
	g++  -c SList.cpp 
	
	
SLNode.o: SLNode.h SLNode.cpp
	g++ $(FLAGS) -c SLNode.cpp

clean:
	rm -f *.o
