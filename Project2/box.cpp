#include "box.h"



Box::Box()
:boxNumber(0), boxColor ("NO COLOR"), prizeCapacity(5), prizeCount(0){
    prizes = new Prize[prizeCapacity];
}

Box::Box(unsigned int newBoxNumber, string newBoxColor, unsigned int newPrizeCapicity)
:boxNumber(newBoxNumber), boxColor(newBoxColor), prizeCapacity(newPrizeCapicity){
    prizeCount = 0;
    prizes = new Prize[prizeCapacity];
}

Box::~Box(){
    if(prizes != NULL){
        delete[] prizes;
        prizes = NULL;
    }
}

void Box::setBoxColor(string newBoxColor){
    boxColor = newBoxColor;
}

void Box::setBoxNumber(unsigned int newBoxNumber){
    boxNumber = newBoxNumber;
}

string Box::getBoxColor(){
    return boxColor;
}

unsigned int Box::getBoxNumber(){
    return boxNumber;
}

unsigned int Box::getPrizeCapacity(){
    return prizeCapacity;
}

unsigned int Box::getPrizeCount(){
    return prizeCount;
}

bool Box::addPrize(Prize prize){
    if(prizeCount < prizeCapacity){
        prizes[prizeCount] = prize;
        prizeCount++;
        return true;
    }
    else{
        return false;
    }
}

Prize& Box::getPrize(unsigned int index){
    if(index < prizeCount){
        return prizes[index];
    }
    else{
        return scratch;
    }
}

Prize Box::removePrize(unsigned int index){
    if(index < prizeCount){
        for(unsigned int i = 0; (index + i) < prizeCount; i++){
           prizes[index] = prizes[index + i];
       }
        prizeCount--;
        return prizes[index];
    }
    else{
        return scratch;
    }
    
}
//public removePrize: parameters index (unsigned int), 
//return value Prize; remove and return Prize if index is valid,
//else return scratch (data member declared in class header)
