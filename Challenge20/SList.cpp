#include "SList.h"


#include <sstream>
#include <string>
using namespace std;


SList::SList()
:head(NULL), size(0)
{}

SList::~SList(){
	clear();
}

void SList::insertHead(int contents){
	
	SLNode* node = new SLNode(contents);
	node->setNextNode(head);
	head = node;
	size++;
	
}

void SList::insertTail(int contents){
	if(head == NULL){
		insertHead(contents);
	}
	else{
		SLNode* i = head;
		while(i->getNextNode() != NULL){
			i = i->getNextNode();
		}
		SLNode* node = new SLNode(contents);
		i->setNextNode(node);
		size++;
	}
}


void SList::removeHead(){
	if(head != NULL){
		SLNode* node = head->getNextNode();
		delete head;
		head = node;
		size--;
	}
}

void SList::removeTail(){
	if(head == NULL){
		//do nothing
	}
	else if(head->getNextNode() == NULL){
		removeHead();
		
	}
	else{
		SLNode* i = head;
		SLNode* j = NULL;
		while(i->getNextNode() != NULL){
			j = i;
			i = i->getNextNode();
		}
		delete i;
		j->setNextNode(NULL);
		size--;
	}
	
}

void SList::insert (int contents){
	SLNode* node = new SLNode(contents);
	if(head == NULL){
		head = node;
		size++;
	}
	else if(head->getNextNode() == NULL){
		if(node->getContents() <= head->getContents()){
			node->setNextNode(head);
			head = node;
			size++;
		}
		else{
			head->setNextNode(node);
			size++;
		}
		
			
	}
	else{
		SLNode* i = head;
		SLNode* j = NULL;
		while(i->getNextNode() != NULL){
			if(node->getContents() <= i->getContents()){
				if(j != NULL){
					j->setNextNode(node);
					node->setNextNode(i);
					size++;
					if(node->getContents() < head->getContents()){
						head = node;
					}
					
					return;
				}
				node->setNextNode(i);
					if(node->getContents() <= head->getContents()){
						head = node;
					}
				size++;
				return;
			}
			else{
				j = i;
				i = i->getNextNode();
			}
		}
		
		if(node->getContents() <= i->getContents()){
				if(j != NULL){
					j->setNextNode(node);
					node->setNextNode(i);
					size++;
					if(node->getContents() < head->getContents()){
						head = node;
					}
					
					return;
				}
				node->setNextNode(i);
					if(node->getContents() < head->getContents()){
						head = node;
					}
				size++;
				return;
			}
		if(i->getNextNode() == NULL){
			i->setNextNode(node);
			size++;
		}
		
	}
	
}

bool SList::removeFirst(int contents){
	if(head != NULL){
		if(head->getContents() == contents){
			head = head->getNextNode();
			size--;
			return true;
		}
		else{
			SLNode* j = head;
			for (SLNode* i = head->getNextNode(); i !=NULL; i=i->getNextNode()){
				if(i->getContents() == contents){
					j->setNextNode(i->getNextNode());
					delete i;
					size--;
					return true;
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

string SList::toString() const {
	stringstream ss;
	if(head != NULL){
		if(head->getNextNode() != NULL){
			for (SLNode* i = head; i !=NULL; i=i->getNextNode()){
					if(i->getNextNode() != NULL){
						ss << i->getContents() << ',';
					}
					else{
						ss << i->getContents();
					}
			}
		}
		else{
			ss << head->getContents();
		}
	}
	
	
	
	return ss.str();
	
}


unsigned int SList::getSize() const{
	return size;
}

void SList::clear(){
	while (head != NULL){
		removeHead();
	}
	
}
