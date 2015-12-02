#include "shoe.h"

#include <iostream>
using namespace std;

//RTYPE (*ID) (PARMS)
//this who thing is a datatype, return type, identifier, and parameters

void apple ();
void grape();
void bannana(int i);

void helperone(void (*f)());

int main(){
    Utility::log(99);
    
    helperone(apple);
    
    return 0;
    
    
    // Shoe s1("Nike", 10);
    // Shoe s2("NIKE", 10);
    // Shoe s3("Nike", 9);
    // Shoe s4("Puma", 10);
    
    // if(s1 == s2)
    //     cout << "s1 and s2 are the same" << endl;
    // else
    //     cout << "s1 and s2 are different" << endl;
        
    // if(s1 == s3)
    //     cout << "s1 and s3 are the same" << endl;
    // else
    //     cout << "s1 and s3 are different" << endl;
        
        
    // if(s1 == s4)
    //     cout << "s1 and s4 are the same" << endl;
    // else
    //     cout << "s1 and s4 are different" << endl;
        
    // cout << Shoe::upperCase("shoes") << endl;
}

void apple() {
    cout <<"apple!" << endl;
}

void bannana (){
    cout << i << " bannana!" << endl;
}

void grape(){
    cout << "grape!" << endl;
}

void helperone (void (*f)()){
    f();
}