FLAGS = -Wall -Wextra -pedantic

pc20: pc20.o SList.o SLNode.o
	g++ $(FLAGS) -o pc20 pc20.o SList.o SLNode.o

pc20.o: pc20.cpp 
	g++ $(FLAGS) -c pc20.cpp
	
test: test.o SList.o SLNode.o
	g++ $(FLAGS) -o test test.o SList.o SLNode.o
	
test.o: test.cpp
	g++ $(FLAGS) -c test.cpp

SList.o: SList.h SList.cpp 
	g++  -c SList.cpp 
	
	
SLNode.o: SLNode.h SLNode.cpp
	g++ $(FLAGS) -c SLNode.cpp

clean:
	rm -f *.o
