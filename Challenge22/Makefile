FLAGS = -Wall -Wextra -pedantic

pc22: pc22.o 
	g++ $(FLAGS) -o pc22 pc22.o 

pc22.o: pc22.cpp 
	g++ $(FLAGS) -c pc22.cpp
	
clean:
	rm -f *.o
