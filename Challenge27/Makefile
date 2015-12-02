FLAGS = -Wall -Wextra -pedantic

pc27: pc27.o BSTNode.o BSTree.o utility.o
	g++ $(FLAGS) -o pc27 pc27.o BSTNode.o BSTree.o utility.o

pc27.o: pc27.cpp 
	g++ $(FLAGS) -c pc27.cpp
	
BSTree.o: BSTree.h BSTree.cpp
	g++ -c $(FLAGS) BSTree.cpp 
	
BSTNode.o: BSTNode.h BSTNode.cpp
	g++ -c $(FLAGS) BSTNode.cpp
	
utility.o: utility.h utility.cpp
	g++ -c $(FLAGS) utility.cpp
	
clean:
	rm -f *.o
