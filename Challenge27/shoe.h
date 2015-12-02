#pragma once

#include <algorithm>
#include <string>
using namespace std;

class Shoe{
    public:
        Shoe (string newBrand = "NO BRAND", unsigned newSize = 0);
        
        bool friend operator== (const Shoe& ls, const Shoe& rs);
        //friend don't have to be in class
        
        static string upperCase (const string& s);
    private:
        string brand;
        unsigned int size;
};