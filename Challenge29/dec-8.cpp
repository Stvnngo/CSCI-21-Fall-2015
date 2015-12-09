#include <utility>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    // pair<string,int> item1("apples", 3);
    // cout << item1.first << ' ' << item1.second << endl;
    
    // vector<string> strvec;
    // cout << "size: " << strvec.size() << endl;
    // if(strvec.empty()){
    //     cout << "vector is empty" << endl;
    // }
    // strvec.push_back("Godzirra");
    // strvec.push_back("Frankenstein");
    // cout << strvec.front() << endl;
    // cout << strvec.back() << endl;
    // for (int i=0; i<strvec.size(); i++){
    //     cout << strvec[i] << ": " << endl;
    // }
    

    // //string* s = new string; use s->length() to dereference or *s
    
    // //iterator is a datatype (STL)
    // for(vector<string>::iterator i=strvec.begin(); i != strvec.end(); i++){
    //     cout << *i << endl;
    // }
    
    // vector<string>::iterator j = strvec.begin();
    
    // strvec.insert(j, "Casper");
    
    // for(vector<string>::iterator i=strvec.begin(); i != strvec.end(); i++){
    //     cout << *i << ',' << endl;
    // }
    
    // vector<string>::iterator k = strvec.begin() + 1;
    
    // strvec.insert(k, "Krampus");
    
    // for(vector<string>::iterator i=strvec.begin(); i != strvec.end(); i++){
    //     cout << *i << ',' << endl;
    // }
    
    // strvec.erase(strvec.begin() +2);
    //  for(vector<string>::iterator i=strvec.begin(); i != strvec.end(); i++){
    //     cout << *i << ',' ;
    // }
    // cout << endl;
    
    //map 
    map<string,int> shoppingList;
    shoppingList["apples"] = 3;
    shoppingList["pears"] = 2;
    shoppingList["grapes"] = 16;
    
    cout << "Items in list: " << shoppingList.size() << endl;
    
    for(map<string,int>::iterator i = shoppingList.begin(); i != shoppingList.end(); i++){
        cout << i->first << " = " << i-> second << endl;
    }
    
    return 0;
}