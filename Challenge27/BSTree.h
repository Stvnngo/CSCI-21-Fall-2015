#pragma once

#include "BSTNode.h"

#include <iostream>
#include <cstdlib>
using namespace std;

class BSTree{
    public:
        BSTree();//
        
        ~BSTree();//
        
        bool insert (int newContents);//
        
        bool remove (int target);
        
        void clear();//
        
        unsigned int getSize() const;//
        
        void inOrder (void (*f) (int));
        
        void reverseOrder (void (*f) (int));
    
    private:
        BSTNode* root;
        unsigned int size;
        
        bool insert (BSTNode*& node, int newContents);//
        
        void clear (BSTNode*& node);//
        
        void removeMax (int& content, BSTNode*& root);
        
        void inOrder (BSTNode* root, void (*f) (int));
        
        void reverseOrder (BSTNode* root, void (*f) (int));
        
        bool remove (int contents, BSTNode*& node);
        
        
        
};
