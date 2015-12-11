FLAGS = -Wall -Wextra -pedantic -std=c++11

pc30: pc30.o 
	g++ $(FLAGS) -o pc30 pc30.o 

pc30.o: pc30.cpp 
	g++ $(FLAGS) -c pc30.cpp
	
clean:
	rm -f *.o
