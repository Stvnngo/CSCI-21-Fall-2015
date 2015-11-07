FLAGS = -Wall -Wextra -pedantic

driver: driver.o DLNode.o DLList.o
	g++ -o driver $(FLAGS) driver.o DLNode.o DLList.o

driver.o: driver.cpp
	g++ -c $(FLAGS) driver.cpp

DLNode.o: DLNode.h DLNode.cpp
	g++ -c $(FLAGS) DLNode.cpp

DLList.o: DLList.h DLList.cpp
	g++ -c $(FLAGS) DLList.cpp

test: test.o DLNode.o DLList.o
	g++ -o test $(FLAGS) test.o DLNode.o DLList.o
	
test.o: test.cpp
	g++ -c $(FLAGS) test.cpp
	

	
clean:
	rm -f *.o
	
cleanall: clean
	rm -f test