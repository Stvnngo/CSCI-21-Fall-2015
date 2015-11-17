//passing and returning by reference changes the original value, passing and return by value if not wanted

#include <iostream>
#include <string>
using namespace std;


class Thing{
    public:
        void setName (string newName){
            name = newName;
        }
        
        string getName () const{
            cout <<"string getName" << endl;
            return name;
        }
        string& getName (){
            cout <<"string& getName" << endl;
            return name;
        }
        
        private:
            string name;
            
};

void testByValue (string s){
    s = "emptied in testByValue";
    cout << "testByValue: " << s << endl;
}

void testByReference (string& s) {
    s = "emptied in testByValue";
    cout << "testByReference: " << s << endl;
}

int main (){
    Thing t1;
    
    t1.getName() = "Boyd was here";
    cout << t1.getName() << endl;
    
    
    testByValue(t1.getName());
    cout << "after testByValue: " << t1.getName() << endl;
    
    testByReference(t1.getName());
    cout << "after testByReference: " << t1.getName() << endl;
    return 0;
}