#include "BSTree.h"

BSTree::BSTree()
:root(NULL), size(0){}

BSTree::~BSTree(){}

bool BSTree::insert (int newContents){
    return insert(root, newContents);
}



bool BSTree::remove (int content){
  
  return remove(content, root);
 
}

bool BSTree::remove (int content, BSTNode*& node){
    if(node == NULL){
        return false;
    }
    else if(node->getContents() == content){
        if(node->getLeftChild() == NULL){   
            BSTNode* target = node;
            node = node->getRightChild();
            delete target;
            size --;
            return true;
        }
        else{
            removeMax(node->getContents(), node->getLeftChild());
            size --;
            return true;
        }
    }
    else if(node->getContents() > content){
        return remove(content, node->getLeftChild());
    }
    else{
        return remove(content, node->getRightChild());
    }
}

void BSTree::removeMax(int& content, BSTNode*& node){
    if(node->getRightChild() == NULL){
        BSTNode* target = node;
        content = node->getContents();
        node = node->getLeftChild();
        delete target;
    }
    else{
        removeMax(content, node->getRightChild());
    }
}

void BSTree::inOrder(void (*f) (int)){
    inOrder(root, f);
}

void BSTree::inOrder (BSTNode* root, void (*f)(int)){
    if(root != NULL){
        inOrder(root->getLeftChild(), f);
        f(root->getContents());  // outs << node->getContents() << " ";
        inOrder(root->getRightChild(), f);
    }
}

void BSTree::reverseOrder(void (*f)(int)){
    reverseOrder(root, f);
}

void BSTree::reverseOrder(BSTNode* root, void(*f)(int)){
    if(root != NULL){
        reverseOrder(root->getRightChild(), f);
        f(root->getContents());
        reverseOrder(root->getLeftChild(), f);
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

