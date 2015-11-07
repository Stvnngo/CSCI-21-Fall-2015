#pragma once

#include "DLNode.h"
#include <string>
#include <iostream>
using namespace std;

class DLList{
    public:
        
        /*Default constructor
        * sets size to 0, heads and tail to NULL
        */
        DLList();
        
        /*Destructor
        * Calls clear();
        */
        ~DLList();
        
        /*getSize
        * gets size
        * @returns an unsigned int from size
        */
        unsigned int getSize() const;
        
        /*pushFront
        * creates new DLNode with newContents and pushes it to head
        * @param newContents an int for the contents of new DLNode
        */
        void pushFront(int newContents);
        
        /*pushBack
        * creates new DLNode with newContents and pushes it to tail
        * @param newContents an int for the contents of new DLNode
        */
        void pushBack(int newContents);
        
        /*insert
        * creates new DLNode with newContents and inserts it into list from lowest to greatest
        * @param newContents an int for the contents of new DLNode
        */
        void insert(int newContents);
        
        /*getFront
        * gets head
        * @returns an int of the contents of the head
        */
        int getFront() const;
        
        /*getBack
        * gets tail
        * @param an int of the contents of the tail
        */
        int getBack() const;
        
        /*get
        * tries to find the target content in DLList
        * @param target the target content you're looking for
        * @returns bool, true for found, false for not found
        */
        bool get(int target) const;
        
        /*popFront
        * removes head
        */
        void popFront();
        
        /*popBack
        * removes tail
        */
        void popBack();
        
        /*removeFirst
        * removes first instance of DLNode with specified contents
        * @param target, target contents of the DLNode you remove
        * @returns bool, true if removed, false if none found to remove
        */
        bool removeFirst(int target);
        
        /*removeAll
        * removes all instances of DLNode with specified contents
        * @param target, target contents of the DLNodes you remove
        * @returns bool, true if removed, false if none found to remove
        */
        bool removeAll(int target);
        
        /*clear
        * clears list and frees up associated memory
        */
        void clear(); 
        
        /* friend operator
        * displays contents of the DLList
        * @param ostream& out
        * @param DLList& src, the DLList you wish to display
        */
        friend ostream& operator<< (ostream& out, const DLList& src);
    
    
    private:
        unsigned int size;
        DLNode* head;
        DLNode* tail;
        
};