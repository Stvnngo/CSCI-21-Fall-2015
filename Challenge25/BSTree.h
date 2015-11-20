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
        
        void clear();//
        
        unsigned int getSize() const;//
        
        void inOrder (ostream& outs);//
    
    private:
        BSTNode* root;
        unsigned int size;
        
        bool insert (BSTNode*& node, int newContents);//
        
        void clear (BSTNode*& node);//
        
        void inOrder (ostream& outs, BSTNode* node);//
        
};