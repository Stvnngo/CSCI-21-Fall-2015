#include <iostream>
#include <string>
using namespace std;

vector<string> words[5];

unsigned int hash (string input);

int main () {
    // cout << "hello " << hash("hello") << endl;
    // cout << "hello " << hash("hello") << endl;
    // cout << "goodbye" << hash("goodbye") << endl;
    // cout << "goodbye" << hash("goodbye") << endl;
    
    string s = "hello";
    //use hash to quickly place hellow into words
    //words only 0-4, use %5 to carve the output down
    unsigned int i = hash(s);
    
    cout << s << ' ' << hash(s) << endl;
    words[i] = s;
    
    string2 = "ohell";
    unsigned int i2 = hash(s2);
    cout << s << ' ' << hash(s2) << endl;
    words[i2].push_back(s2) ;
    
    
    cout << "where is hello? at index " << hash("hello") << endl;
    
    return 0;
}

unsigned int hash (string input) {
    unsigned int output = 0;
    for (unsigned int i = 0 ; i < input.length(); i++){
        output += input[i];
    }
    return output % 5;
}