#include "DLList.h"

#include <sstream>
#include <string>

//keep
#include <iostream>

using namespace std;

DLList::DLList()
:size(0), head(NULL), tail(NULL){}

DLList::~DLList(){
    clear();
}

unsigned int DLList::getSize() const{
    return size;
}

void DLList::pushFront(int newContents){
    DLNode* node = new DLNode(newContents);
    if(head != NULL){
    	node->setNext(head);
    	head->setPrevious(node);
    	head = node;
    	size++;
    }
    else{
    	head = node;
    	tail = node;
    	size++;
    }
}



void DLList::pushBack(int newContents){
    DLNode* node = new DLNode(newContents);
    if(head != NULL){
    	tail->setNext(node);
    	node->setPrevious(tail);
    	tail = node;
    	size++;
    }
    else{
    	head = node;
    	tail = node;
    	size++;
    }
    
}

void DLList::insert(int newContents){
	DLNode* node = new DLNode(newContents);
	if(head == NULL){
		head = node;
    	tail = node;
    	size++;
	}
	else if(head->getNext() == NULL){
		if(node->getContents() <= head->getContents()){
			node->setNext(head);
			head->setPrevious(node);
			tail = head;
			head = node;
			size++;
		}
		else{
			head->setNext(node);
			node->setPrevious(head);
			tail = node;
			size++;
		}
		
			
	}
	else{
		DLNode* i = head;
		DLNode* j = NULL;
		while(i->getNext() != NULL){
			if(node->getContents() <= i->getContents()){
				if(j != NULL){
					j->setNext(node);
					node->setPrevious(j);
					node->setNext(i);
					i->setPrevious(node);
					size++;
					if(node->getContents() < head->getContents()){
						head = node;
					}
					
					return;
				}
				node->setNext(i);
				i->setPrevious(node);
					if(node->getContents() <= head->getContents()){
						head = node;
					}
				size++;
				return;
			}
			else{
				j = i;
				i = i->getNext();
			}
		}
		
		if(node->getContents() <= i->getContents()){
				if(j != NULL){
					j->setNext(node);
					node->setPrevious(j);
					node->setNext(i);
					i->setPrevious(node);
					size++;
					if(node->getContents() < head->getContents()){
						head = node;
					}
					
					return;
				}
				node->setNext(i);
				i->setPrevious(node);
					if(node->getContents() <= head->getContents()){
						head = node;
					}
				size++;
				return;
			}
		if(i->getNext() == NULL){
			i->setNext(node);
			node->setPrevious(i);
			tail = node;
			size++;
		}
		
	}
}


int DLList::getFront() const{
	if(head == NULL){
		throw "LIST EMPTY";
	}
	else{
		return head->getContents();
	}
}

int DLList::getBack() const{
	if(tail == NULL){
		throw "LIST EMPTY";
	}
	else{
		return tail->getContents();
	}
}

bool DLList::get(int target) const{
	if(head != NULL){
		if(head->getContents() == target){
			return true;
		}
		else{
		
			for (DLNode* i = head->getNext(); i !=NULL; i=i->getNext()){
				if(i->getContents() == target){
					return true;
				}
			}
			return false;
		}
	}
	else{
		return false;
	}
}

void DLList::popFront(){
	if(head != NULL){
		DLNode* node = head->getNext();
		delete head;
		head = node;
		size--;
	}
}

void DLList::popBack(){
	if(tail != NULL){
		DLNode* node = tail->getPrevious();
		delete tail;
		tail = node;
		tail->setNext(NULL);
		size--;
	}
}

bool DLList::removeFirst(int target){
	if(head != NULL){
		if(head->getContents() == target){
			DLNode* node = head->getNext();
			delete head;
			head = node;
			size--;
			return true;
		}
		else{
			DLNode* j = head;
			for (DLNode* i = head->getNext(); i !=NULL; i=i->getNext()){
				if(i->getContents() == target){
					if(i->getNext() != NULL){
						DLNode* k = i->getNext();
						j->setNext(k);
						k->setPrevious(j);
						delete i;
						size--;
						return true;
					}
					else{
						tail = i->getPrevious();
						delete i;
						tail->setNext(NULL);
						size--;
						return true;
					}
				}
				j = i;
			}
			return false;
		}
	}
	else{
		return false;
	}
}

bool DLList::removeAll(int target){
		bool coolBool = false;
		
		if(head != NULL){
			if(head->getContents() == target){
				DLNode* node = head->getNext();
				delete head;
				head = node;
				size--;
			}
			DLNode* j = head;
			for (DLNode* i = head->getNext(); i !=NULL; i=i->getNext()){
				if(i->getContents() == target){
					if(i->getNext() != NULL){
						DLNode* k = i->getNext();
						j->setNext(k);
						k->setPrevious(j);
						delete i;
						i = j;
						size--;
						coolBool = true;
					}
					else{
						tail = i->getPrevious();
						delete i;
						tail->setNext(NULL);
						size--;
						coolBool = true;
					}
				}
				j = i;
			}
			return coolBool;
		
	}
	else{
		return coolBool;
	}
}

void DLList::clear(){
	while (head != NULL){
		popFront();
	}
	head = NULL;
	tail = NULL;
	size = 0;
}

ostream& operator<< (ostream& out, const DLList& src){
    
    if(src.head != NULL){
		if(src.head->getNext() != NULL){
			for (DLNode* i = src.head; i !=NULL; i=i->getNext()){
					if(i->getNext() != NULL){
						out << i->getContents() << ',';
					}
					else{
						out << i->getContents();
					}
			}
		}
		else{
			out << src.head->getContents();
		}
	}
    return out;
}
   
   