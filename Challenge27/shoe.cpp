#include "shoe.h"

Shoe::Shoe (string newBrand, unsigned int newSize)
:brand(newBrand), size(newSize)
{}

bool operator== (const Shoe& ls, const Shoe& rs){
    return(Shoe::upperCase(ls.Brand) == Shoe::upperCase(rs.Brand) && ls.size = rs.size);

}

string Shoe::upperCase (const string& s){
    string us = s;
    transform(us.begin(), us.end(), us.begin(), ::toupper);
    return us;
    //trasform argument 1-2, overwrite argument 3
    //static are member functions but object not needed
}