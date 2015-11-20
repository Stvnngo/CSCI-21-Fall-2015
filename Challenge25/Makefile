FLAGS = -Wall -Wextra -pedantic

pc25: pc25.o BSTNode.o BSTree.o
	g++ $(FLAGS) -o pc25 pc25.o BSTNode.o BSTree.o

pc25.o: pc25.cpp 
	g++ $(FLAGS) -c pc25.cpp
	
BSTree.o: BSTree.h BSTree.cpp
	g++ -c $(FLAGS) BSTree.cpp 
	
BSTNode.o: BSTNode.h BSTNode.cpp
	g++ -c $(FLAGS) BSTNode.cpp
	
clean:
	rm -f *.o
