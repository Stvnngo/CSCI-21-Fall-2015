FLAGS = -Wall -Wextra -pedantic

pc24: pc24.o BSTNode.o
	g++ $(FLAGS) -o pc24 pc24.o BSTNode.o

pc24.o: pc24.cpp 
	g++ $(FLAGS) -c pc24.cpp
	
BSTNode.o: BSTNode.h BSTNode.cpp
	g++ -c $(FLAGS) BSTNode.cpp
	
clean:
	rm -f *.o
