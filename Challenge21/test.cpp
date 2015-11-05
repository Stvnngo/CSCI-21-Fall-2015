#include "box.h"

#include <iostream>
#include <sstream>
using namespace std;

int main(){
    
    //declaring T for template as int and string
    Box<int> intBox(99);
    Box<string> stringBox("hello");
    
    Box<Box<bool> > bb(Box<bool>(true));
    
    cout << bb.getContents() << endl;
    
    cout << intBox << endl;
    cout << stringBox << endl;
    
    stringstream ss;
    ss << intBox;
    
    //vector<Box<Box<bool > intVect;
    
    return 0;
}