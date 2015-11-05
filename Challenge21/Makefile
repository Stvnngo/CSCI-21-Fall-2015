FLAGS = -Wall -Wextra -pedantic

pc21: pc21.o 
	g++ $(FLAGS) -o pc21 pc21.o 

pc21.o: pc21.cpp 
	g++ $(FLAGS) -c pc21.cpp
	
clean:
	rm -f *.o
