FLAGS = -Wall -Wextra -pedantic

pc1: pc1.cpp
	g++ $(FLAGS) -o pc1 pc1.cpp
	
pc2: pc2.cpp
	g++ $(FLAGS) -o pc2 pc2.cpp
	
pc3: pc3.cpp
	g++ $(FLAGS) -o pc3 pc3.cpp
	
pc5: pc5.cpp
	g++ $(FLAGS) -o pc5 pc5.cpp
	
pc6: pc6.cpp
	g++ $(FLAGS) -o pc6 pc6.cpp
		
pc8: pc8.cpp
	g++ $(FLAGS) -o pc8 pc8.cpp
	
pc9: pc9.cpp
	g++ $(FLAGS) -o pc9 pc9.cpp

pc11: pc11.cpp
	g++ $(FLAGS) -o pc11 pc11.cpp
	
pc13: pc13.cpp
	g++ $(FLAGS) -o pc13 pc13.cpp
	
pc14: pc14.cpp
	g++ $(FLAGS) -o pc14 pc14.cpp
	
pc15: pc15.cpp
	g++ $(FLAGS) -o pc15 pc15.cpp
	
pc17: pc17.o SLNode.o
	g++ $(FLAGS) -o pc17 pc17.o SLNode.o
	
pc17.o: pc17.cpp
	g++ -c $(FLAGS) -c pc17.cpp
	

SList.o: SList.h SList.cpp 
	g++  -c SList.cpp 
	
	
SLNode.o: SLNode.h SLNode.cpp
	g++ $(FLAGS) -c SLNode.cpp

pc18: pc18.o SList.o SLNode.o
	g++ $(FLAGS) -o pc18 pc18.o SList.o SLNode.o

pc18.o: pc18.cpp 
	g++ $(FLAGS) -c pc18.cpp

test: test.o SList.o SLNode.o
	g++ $(FLAGS) -o test test.o SList.o SLNode.o

test.o: test.cpp
	g++ $(FLAGS) -c test.cpp

clean:
	rm -f *.o
