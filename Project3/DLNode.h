#pragma once

#include <cstdlib>
using namespace std;


class DLNode{
    public:
        /*Default Constructor
        * size to 0, head and tail to NULL
        */
        DLNode();
        
        /*Default Constructor
        * contents to newContents, head and tail to NULL
        * @param newContents, int that will be what contents will be set to
        */
        DLNode(int newContents);
        
        /*Destructor
        * Does nothing
        */
        ~DLNode();
        
        /*setContents
        * sets contents to newContents
        * @param newContents, int that will be what contents will be set to
        */
        void setContents(int newContents);
        
        /*setNext
        * sets nextNode to newNext
        * @param newNext, pointer to DLNode that is desired for nextNode
        */
        void setNext(DLNode* newNext);
        
        /*setPrevious
        * sets previousNode to newPrevious
        * @param newPrevious, pointer to DLNode that is desired for nextNode
        */
        void setPrevious(DLNode* newPrevious);
        
        /*getContents
        * returns contents
        * @returns an int from contents
        */
        int getContents() const;
        
        /*getNext
        * gets nextNode
        * @returns a pointer to a DLNode from nextNode
        */
        DLNode* getNext() const;
        
        /*getPrevious
        * gets previousNode
        * @returns a pointer to a DLNode from previousNode
        */
        DLNode* getPrevious() const;
    
    
    private:
        
        int contents;
        DLNode* nextNode;
        DLNode* previousNode;
};