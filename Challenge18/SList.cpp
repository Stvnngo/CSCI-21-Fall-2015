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

void SList::removeHead(){
	if(head != NULL){
		SLNode* node = head->getNextNode();
		delete head;
		head = node;
		size--;
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
