/*
 * Project 2
 * Creates prizes with values and names
 *
 * Steven Ngo
 * 10/15/2015
 * 10/16/2015
 *
 * 
 */

#pragma once

#include <string>
using std::string;

class Prize{
    public:
    
    /*
    * this is the default constructor.
    * initializes prizeName as "NO NAME" and prizeValue as 0
    */
    Prize();
    
    /*
    * This is the overloaded constructor that creates a prize 
    * initializes prizeName and prizeValue as parameters
    * @param newPrizeName, the desired prize name
    * @param newPrizeValue, the desired prize value
    */
    Prize(string newPrizeName, unsigned int newPrizeValue);
    
    /*
        * this is the destructor for the prize.
        * it frees the memory associated with prize.
        */
    ~Prize();
    
    /*
    * sets prize name to a new name
    * @param newPrizeName, the desired prize name
    */   
    void setPrizeName (string newPrizeName);
    
    /*
    * sets prize value to a new value
    * @param newPrizeValue, the desired prize value
    */   
    void setPrizeValue(unsigned int newPrizeValue);
    
    /*
    * gets prize name
    * @return a string for the prize's name
    */    
    string getPrizeName();
    
    /*
    * gets prize value
    * @return a unsigned int for the prize's value
    */    
    unsigned int getPrizeValue();
    
    /*
    * this is friend bool operator==()
    * it compares two prizes and returns true if they are the same, otherwise returns false
    */    
    friend bool operator== (const Prize& lp, const Prize& rp);
    
    
    private:
        string prizeName;
        unsigned int prizeValue;
    
        
    
};