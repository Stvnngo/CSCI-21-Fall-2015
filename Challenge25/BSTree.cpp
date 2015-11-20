#include "BSTree.h"

BSTree::BSTree()
:root(NULL), size(0){}

BSTree::~BSTree(){}

bool BSTree::insert (int newContents){
    return insert(root, newContents);
}

void BSTree::inOrder(ostream& outs){
    inOrder(outs, root);
}

void BSTree::inOrder (ostream& outs, BSTNode* node){
    if(node != NULL){
        inOrder(outs, node->getLeftChild());
        outs << node->getContents() << " ";
        inOrder(outs, node->getRightChild());
    }
}

bool BSTree::insert (BSTNode*& node, int newContents){
    if(node == NULL){
        node = new BSTNode(newContents);
        size ++;
        return true;
    }
    else if(newContents < node->getContents()){
        return insert(node->getLeftChild(), newContents);
        
    }else if(newContents > node->getContents()){
        return insert(node->getRightChild(), newContents);
    }else{
        return false;
    }
}

unsigned int BSTree::getSize() const{
    return size;
}

void BSTree::clear(){
    clear (root);
}

void BSTree::clear (BSTNode*& node){
    if(node != NULL){
        clear(node->getLeftChild());
        clear(node->getRightChild());
        delete node;
        node = NULL;
        size --;
    }
}