/*
 * Project 2
 * Runs through an automatic test as well as manual testing for prizes and boxes.
 *
 * Steven Ngo
 * 10/15/2015
 * 10/16/2015
 *
 * SOURCES USED: CinReader, 2008, J Boyd Trolinger
 */


#include "box.h"
#include "prize.h"
#include "CinReader.h"


#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

/* for unit testing -- do not alter */
template <typename X, typename A>
void btassert(A assertion);
void unittest ();

int main (int argc, char* argv[]) {
    unittest();
	
	CinReader reader1;
	bool repeat = true;
    Prize  prize1;
    Prize prize2;
    Box box1;
    string differentName;
    string differentColor;
	unsigned int differentValue;
	unsigned int option;
	
	while(repeat){
	    
	    
	    cout << "[1] Test prize" << endl;
        cout << "[2] Test box" << endl;
        cout << "[3] Exit " << endl;
        
        switch(reader1.readInt(1,3)){
            
            case 1:
                cout << "Prize info: " << prize1.getPrizeName() << " , " << prize1.getPrizeValue() << endl;
                cout << "[1] Change Prize name" << endl;
                cout << "[2] Change prize Value" << endl;
                cout << "[3] Compare two prizes" << endl;
                cout << "[4] Exit" << endl;
                
                
                switch(reader1.readInt(1,8)){
                    case 1:
                        cout << "Changin prize name from " << prize1.getPrizeName() << " to ... ";
                        differentName = reader1.readString();
                        prize1.setPrizeName(differentName);
                        break;
                       
                    case 2:
                        cout << "Changin prize value from " << prize1.getPrizeValue() << " to ... ";
                        differentValue = reader1.readInt();
                        prize1.setPrizeValue(differentValue);
                        break;
                    
                    case 3:
                        cout << "What's the name of the second Prize?" << endl;
                        differentName = reader1.readString();
                        prize2.setPrizeName(differentName);
                        
                        cout << "What's the value of the second Prize?" << endl;
                        differentValue = reader1.readInt();
                        prize2.setPrizeValue(differentValue);
                        
                        if (prize1 == prize2) {
                        cout << "The two prizes are the same." << endl;
                        } else {
                        cout << "The two prizes are not the same." << endl;
                }
                    case 4:
                        
                        break;
                }
                break;
            
            case 2:
                cout << "Box info: " << box1.getBoxColor() << " , " << box1.getBoxNumber() << endl;
                cout << "[1] Add prize" << endl;
                cout << "[2] View Prizes" << endl;
                cout << "[3] Take out a Prize" << endl;
                cout << "[4] Change box number" << endl;
                cout << "[5] Change box color" << endl;
                cout << "[6] View prize capacity" << endl;
                cout << "[7] View prize count" << endl;
                cout << "[8] Exit" << endl;
                
                switch(reader1.readInt(1,8)){
                    case 1:
                        cout << "Prize name?" << endl;
                        differentName = reader1.readString();
                        
                        cout << endl << "Prize value?" << endl;
                        differentValue = reader1.readInt();
                        
                        if(box1.addPrize(Prize(differentName, differentValue)) == true){
                            cout << endl << differentName << " added" << endl;
                        }
                        else
                            cout << "couldn't add" << endl;
                        break;
                    
                    case 2:
                        if (box1.getPrizeCount() == 0){
                            cout << "no prizes yet" << endl;
                        }
                        else{
                            for (unsigned int i = 0; i < box1.getPrizeCount(); i++){
                                cout << "Prize #" << i + 1 << ": " << box1.getPrize(i).getPrizeName() << " worth " << box1.getPrize(i).getPrizeValue() << endl;
                            }
                        }
                        break;
                    case 3:
                        if (box1.getPrizeCount() == 0){
                            cout << "no prizes to take out" << endl;
                        }
                        else{
                            for (unsigned int i = 0; i < box1.getPrizeCount(); i++){
                                cout << "Prize #" << i + 1 << ": " << box1.getPrize(i).getPrizeName() << " worth " << box1.getPrize(i).getPrizeValue() << endl;
                            }
                        }
                        cout << "Which prize to take out? Type the number of your choice" << endl;
                        option = reader1.readInt();
                        box1.removePrize((option - 1));
                        cout << "prize #" << option << " was taken out." << endl;
                        break;
                        
                    case 4:
                        cout << "Changin box number from " << box1.getBoxNumber() << " to ... ";
                        differentValue = reader1.readInt();
                        box1.setBoxNumber(differentValue);
                        break;
                    
                    case 5:
                        cout << "Changin box color from " << box1.getBoxColor() << " to ... ";
                        differentColor = reader1.readString();
                        box1.setBoxColor(differentColor);
                        break;
                    
                    case 6:
                        cout << "Capacity is " << box1.getPrizeCapacity() << endl;
                        break;
                        
                    case 7:
                        cout << "Count is " << box1.getPrizeCount() << endl;
                        break;
                    
                    case 8:
                        break;
                }
                break;
                
            case 3:   
            repeat = false;
            break;
        }
	}
    
	
    //user selects an option
    //if (option == 1){
      //  if (p != NULL)
      //      delete p;
     //   p = new Prize;
     //   cout << "Created a default prize" << endl;
	
    // CODE HERE -- INTERACTIVE TEST
    //
    // add additional functions as needed to support interactive test
	
    return 0;
}

/*
 * Unit testing functionb1. Do not alter.
 */

void unittest () {

    unsigned short utCount = 35;
    unsigned short utPassed = 0;

    cout << "\nSTARTING UNIT TEST\n\n";
	
    Box b1;
    Box b2(42, "blue", 3);
	
    cout << "** TESTING DEFAULT BOX **\n\n";
	
    try {
        btassert<bool>(b1.getBoxNumber() == 0);
        cout << "Passed TEST 1: Box getBoxNumber()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 1 Box getBoxNumber() #\n";
    }
	
    try {
        btassert<bool>(b1.getBoxColor() == "NO COLOR");
        cout << "Passed TEST 2: Box getBoxColor()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 2 Box getBoxColor() #\n";
    }
    
    try {
        btassert<bool>(b1.getPrizeCapacity() == 5);
        cout << "Passed TEST 3: Box getPrizeCapacity()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 3 Box getPrizeCapacity() #\n";
    }
	
    try {
        btassert<bool>(b1.getPrizeCount() == 0);
        cout << "Passed TEST 4: Box getPrizeCount()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 4 Box getPrizeCount() #\n";
    }
	
    b1.setBoxNumber(99);
    try {
        btassert<bool>(b1.getBoxNumber() == 99);
        cout << "Passed TEST 5: Box setBoxNumber()/getBoxNumber()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 5 Box setBoxNumber()/getBoxNumber() #\n";
    }
	
    b1.setBoxColor("red");
    try {
        btassert<bool>(b1.getBoxColor() == "red");
        cout << "Passed TEST 6: Box setBoxColor()/getBoxColor()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 6 Box setBoxColor()/getBoxColor() #\n";
    }
    
    cout << "\n** TESTING CUSTOM BOX **\n\n";
	
    try {
        btassert<bool>(b2.getBoxNumber() == 42);
        cout << "Passed TEST 7: Box getBoxNumber()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 7 Box getBoxNumber() #\n";
    }
	
    try {
        btassert<bool>(b2.getBoxColor() == "blue");
        cout << "Passed TEST 8: Box getBoxColor()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 8 Box getBoxColor() #\n";
    }
    
    try {
        btassert<bool>(b2.getPrizeCapacity() == 3);
        cout << "Passed TEST 9: Box getPrizeCapacity()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 9 Box getPrizeCapacity() #\n";
    }
	
    try {
        btassert<bool>(b2.getPrizeCount() == 0);
        cout << "Passed TEST 10: Box getPrizeCount()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 10 Box getPrizeCount() #\n";
    }
	
    try {
        btassert<bool>(b2.getPrize(0) == Prize());
        cout << "Passed TEST 11: Box getPrize(0)\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 11 Box getPrize(0) #\n";
    }
	
    try {
        btassert<bool>(b2.removePrize(0) == Prize());
        cout << "Passed TEST 12: Box removePrize(0)\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 12 Box removePrize(0) #\n";
    }
    
    b2.addPrize(Prize("BRONZE PRIZE", 1));
    try {
        btassert<bool>(b2.getPrizeCount() == 1);
        cout << "Passed TEST 13: Box addPrize()/getPrizeCount()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 13 Box addPrize()/getPrizeCount() #\n";
    }
    
    b2.addPrize(Prize("SILVER PRIZE", 100));
    try {
        btassert<bool>(b2.getPrizeCount() == 2);
        cout << "Passed TEST 14: Box addPrize()/getPrizeCount()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 14 Box addPrize()/getPrizeCount() #\n";
    }
        
    b2.addPrize(Prize("GOLD PRIZE", 1000));
    try {
        btassert<bool>(b2.getPrizeCount() == 3);
        cout << "Passed TEST 15: Box addPrize()/getPrizeCount()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 15 Box addPrize()/getPrizeCount() #\n";
    }
    
    try {
        btassert<bool>(b2.addPrize(Prize("DIAMOND PRIZE", 999)) == false);
        cout << "Passed TEST 16: Box addPrize(ARRAY FULL)\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 16 Box addPrize(ARRAY FULL) #\n";
    }
	
    try {
        btassert<bool>(b2.getPrize(1) == Prize("SILVER PRIZE", 100));
        cout << "Passed TEST 17: Box getPrize(1)\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 17 Box getPrize(1) #\n";
    }
	
    try {
        btassert<bool>(b2.removePrize(2) == Prize("GOLD PRIZE", 1000));
        cout << "Passed TEST 18: Box removePrize(2)\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 18 Box removePrize(2) #\n";
    }
    
    try {
        btassert<bool>(b2.getPrizeCount() == 2);
        cout << "Passed TEST 19: Box getPrizeCount()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 19 Box getPrizeCount() #\n";
    }
	
    try {
        btassert<bool>(b2.removePrize(2) == Prize());
        cout << "Passed TEST 20: Box removeCargo(2)\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 20 Box removeCargo(2) #\n";
    }
	
    try {
        btassert<bool>(b2.getPrize(2) == Prize());
        cout << "Passed TEST 21: Box getPrize(2)\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 21 Box getPrize(2) #\n";
    }
	
    try {
        btassert<bool>(b2.addPrize(Prize("RUBY PRIZE", 9999)) == true);
        cout << "Passed TEST 22: Box addPrize(\"RUBY PRIZE\", 9999)\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 22 Box addPrize(\"RUBY PRIZE\", 9999) #\n";
    }
    
    try {
        btassert<bool>(b2.getPrizeCount() == 3);
        cout << "Passed TEST 23: Box getPrizeCount()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 23 Box getPrizeCount() #\n";
    }
	
    try {
        btassert<bool>(b2.getPrizeCapacity() == 3);
        cout << "Passed TEST 24: Box getPrizeCapacity()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 24 Box getPrizeCapacity() #\n";
    }
	
    cout << "\n** TESTING PRIZE **\n\n";
	
    Prize p1;
	
    try {
        btassert<bool>(p1.getPrizeName() == "NO NAME");
        cout << "Passed TEST 25: Prize getPrizeName()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 25 Prize getPrizeName() #\n";
    }
	
    try {
        btassert<bool>(p1.getPrizeValue() == 0);
        cout << "Passed TEST 26: Prize getPrizeValue()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 26 Prize getPrizeValue() #\n";
    }
	
    p1.setPrizeName("FOOD PRIZE");
    try {
        btassert<bool>(p1.getPrizeName() == "FOOD PRIZE");
        cout << "Passed TEST 27: Prize setPrizeName(\"FOOD PRIZE\")/getPrizeName()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 27 Prize setPrizeName(\"FOOD PRIZE\")/getPrizeName() #\n";
    }
	
    p1.setPrizeValue(17);
    try {
        btassert<bool>(p1.getPrizeValue() == 17);
        cout << "Passed TEST 28: Prize setPrizeValue(17)/getPrizeValue()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 28 Prize setPrizeValue(17)/getPrizeValue() #\n";
    }
	
    Prize p2("HAT PRIZE", 50);
	
    try {
        btassert<bool>(p2.getPrizeName() == "HAT PRIZE");
        cout << "Passed TEST 29: Prize getPrizeName()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 29 Prize getPrizeName() #\n";
    }
	
    try {
        btassert<bool>(p2.getPrizeValue() == 50);
        cout << "Passed TEST 30: Prize getPrizeValue()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 30 Prize getPrizeValue() #\n";
    }
    
    try {
        btassert<bool>(!(p1 == p2));
        cout << "Passed TEST 31: !(Prize == Prize)\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 31 !(Prize == Prize) #\n";
    }
    
    p2.setPrizeName("FOOD PRIZE");
    try {
        btassert<bool>(p2.getPrizeName() == "FOOD PRIZE");
        cout << "Passed TEST 32: Prize setPrizeName(\"FOOD PRIZE\")/getPrizeName()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 32 Prize setPrizeName(\"FOOD PRIZE\")/getPrizeName() #\n";
    }
	
    p2.setPrizeValue(17);
    try {
        btassert<bool>(p2.getPrizeValue() == 17);
        cout << "Passed TEST 33: Prize setPrizeValue(17)/getPrizeValue()\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 33 Prize setPrizeValue(17)/getPrizeValue() #\n";
    }
    
    try {
        btassert<bool>(p1 == p2);
        cout << "Passed TEST 34: (Prize == Prize)\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 34 (Prize == Prize) #\n";
    }
    
    p2.setPrizeValue(1);
    try {
        btassert<bool>(!(p1 == p2));
        cout << "Passed TEST 35: !(Prize == Prize)\n";
        ++utPassed;
    } catch (bool b) {
        cout << "# FAILED TEST 35 !(Prize == Prize) #\n";
    }
	
    cout << "\nUNIT TEST COMPLETE\n\n";
    
    cout << "PASSED " << utPassed << " OF " << utCount << " UNIT TEST";
    if (utCount > 1) {
        cout << "S";
    }
    cout << "\n\n";
}

template <typename X, typename A>
void btassert (A assertion) {
    if (!assertion)
        throw X();
}