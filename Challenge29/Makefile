FLAGS = -Wall -Wextra -pedantic -std=c++11

pc29: pc29.o 
	g++ $(FLAGS) -o pc29 pc29.o 

pc29.o: pc29.cpp 
	g++ $(FLAGS) -c pc29.cpp
	
clean:
	rm -f *.o
