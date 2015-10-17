FLAGS = -Wall -Wextra -pedantic

project2: project2.o box.o prize.o CinReader.o
	g++ -o project2 $(FLAGS) project2.o box.o prize.o CinReader.o
	
project_test.o: project2.cpp
	g++ $(FLAGS) -c project2.cpp
	
box.o: box.h box.cpp
	g++ $(FLAGS) -c box.cpp
	
prize.o: prize.h prize.cpp
	g++ $(FLAGS) -c prize.cpp
	
CinReader.o: CinReader.cpp CinReader.h
	g++ $(FLAGS) -c CinReader.cpp

clean:
	rm -f *.o
	
cleanall: clean
	rm -f projec2 