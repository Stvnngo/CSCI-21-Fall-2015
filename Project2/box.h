/*
 * Project 2
 * creates boxes with colors and numbers, can hold prizes
 *
 * Steven Ngo
 * 10/15/2015
 * 10/16/2015
 *
 * 
 */

#pragma once

#include "prize.h"
#include <string>
using std::string;


class Box{
    public:
        
        /*
        * This is Box(). this default constructor creates a box with predefined features
        * a box with predefined features
        */
        Box();
        
        
        /*
        * This is the overloaded constructor that creates a box 
        * and initializes prizeCount to 0 
        * @param newBoxNumber, this is the desired number for box.
        * @param newBoxColor, this is the desired color for box
        * @param newPrizeCapacity, this is the desired prizeCapacity for the box.
        */
        Box(unsigned int newBoxNumber, string newBoxColor, unsigned int newPrizeCapicity);
        
        /*
        * this is the destructor for the box.
        * it frees the memory associated with box.
        */
        ~Box();
        
        /*
        * This is setBoxColor(), it sets the box's color to a different string. 
        * and initializes prizeCount to 0 
        * @param newBoxColor, this is the desired color for box
        */
        void setBoxColor(string newBoxColor);
        
        /*
        * This is the setBoxNumber, it sets the box's number to a different value
        * and initializes prizeCount to 0 
        * @param newBoxNumber, this is the desired number for box.
        */
        void setBoxNumber(unsigned int newBoxNumber);
        
        /*
        * This is getBoxColor, it returns the box's number
        * @return a string for the box's color
        */
        string getBoxColor();
        
        /*
        * This is getBoxNumber(), it returns a number for the box.
        * @return an int for the number of the box.
        */
        unsigned int getBoxNumber();
        
        /*
        * This is getPrizeCapacity(), it returns the box's prize capacity
        * @return an unsigned int for the box's prize capacity.
        */
        unsigned int getPrizeCapacity();
        
        /*
        * this is getPrizeCount(), it returns the box's prize count.
        * @return an unsigned int for the box's prize count.
        */
        unsigned int getPrizeCount();
    
        /*
        * adds a prize to the box.
        * and initializes prizeCount to 0 
        * @param prize, this is the Prize that is added to the box.
        * @return a bool, true if successful, false if not so
        */
        bool addPrize(Prize prize);
    
        /*
        * gets a reference to a prize at the specified index
        * @param index, the index where the prize is located
        * @return a refrence to a prize, if index was bad then returns scratch
        */
        Prize& getPrize(unsigned int index);
        
        /*
        * removes a prize at the specified index
        * @param index, the index where the prize is located
        * @return the prize at index, otherwise scratch if index was invalid
        */
        Prize removePrize(unsigned int index);
        
    private:
        unsigned int boxNumber;
        string boxColor;
        Prize scratch;
        Prize* prizes;
        unsigned int prizeCapacity;
        unsigned int prizeCount;
    
    
};

