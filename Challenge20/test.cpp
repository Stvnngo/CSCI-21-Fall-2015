
#include "SList.h"

#include <cassert>
#include <cstdlib>
#include <iostream>
using namespace std;


int main () {
    SList theList;
    theList.insert(20);
    cout << theList.toString() << endl;
    theList.insert(15);
    cout << theList.toString() << endl;
    theList.insert(2);
    cout << theList.toString() << endl;
       theList.insert(5);
    cout << theList.toString() << endl;
    theList.insert(13);
    cout << theList.toString() << endl;
     theList.insert(5);
    cout << theList.toString() << endl;
       theList.insert(5);
    cout << theList.toString() << endl;
    theList.insert(1);
    cout << theList.toString() << endl;
    theList.insert(1);
    cout << theList.toString() << endl;
    
    theList.insert(14);
    cout << theList.toString() << endl;
       theList.insert(16);
    cout << theList.toString() << endl;
       theList.insert(17);
    cout << theList.toString() << endl;
    
	theList.insert(33);
	cout << theList.toString() << endl;
	
	theList.removeFirst(5);
	cout << theList.toString() << endl;
	theList.removeFirst(20);
	cout << theList.toString() << endl;
	theList.removeFirst(33);
	cout << theList.toString() << endl;
	theList.removeFirst(1);
	cout << theList.toString() << endl;
	theList.removeFirst(5);
	cout << theList.toString() << endl;
	theList.removeFirst(5);
	cout << theList.toString() << endl;
	theList.removeFirst(20);
	cout << theList.toString() << endl;
	
	
	return 0;
}
