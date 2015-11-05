#pragma once

#include <iostream>
using namespace std;

//template allows you to specify things later
//class T placeholder for future datatype
template <class T>
class Box{
    public:
    //compilers more readily accept if you do implementation in header for templates
        Box (T newContents)
        :contents(newContents)
        {}
        
        void setContents (T newContents){
            contents = newContents;
        }
        
        T getContents (){
            return contents;
        }
        
        friend ostream& operator<< (ostream& outs, const Box& b){
            outs << b.contents;
            return outs;
        }
        //friend allows it to access class members
        //tells what you want them to do with your custom type
    private:
        T contents;
    
};

//don't compile headers