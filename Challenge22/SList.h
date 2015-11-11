#pragma once

#include "SLNode.h"
#include <sstream>
#include <string>
#include <cstdlib>
using namespace std;

template <class T>

class SList{
	public: 
		SList ()
		: head(NULL) {}
		
		void pushFront (T newContents){
			SLNode<T>* node = SLNode<T>(newContents);
			node->setNextNode(head);
			head = node;
		}
		
		void insertHead(T contents){
			SLNode<T>* node = new SLNode<T>(contents);
			node->setNextNode(head);
			head = node;
			size++;
	
		}
		
		void insertTail (T contents){
			if(head == NULL){
				insertHead(contents);
			}
			else{
				SLNode<T>* i = head;
				while(i->getNextNode() != NULL){
					i = i->getNextNode();
				}
				SLNode<T>* node = new SLNode<T>(contents);
				i->setNextNode(node);
				size++;
			}
		}
		
		void removeHead(){
			if(head != NULL){
				SLNode<T>* node = head->getNextNode();
				delete head;
				head = node;
				size--;
			}	
		}
		
		void removeTail(){
			if(head == NULL){
			//do nothing
			}
			else if(head->getNextNode() == NULL){
				removeHead();
		
			}
			else{
				SLNode<T>* i = head;
				SLNode<T>* j = NULL;
				while(i->getNextNode() != NULL){
					j = i;
					i = i->getNextNode();
				}
				delete i;
				j->setNextNode(NULL);
				size--;
			}
		
		}
		void insert(T contents){
			SLNode<T>* node = new SLNode<T>(contents);
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
				SLNode<T>* i = head;
				SLNode<T>* j = NULL;
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
		
		bool removeFirst(T contents){
			if(head != NULL){
				if(head->getContents() == contents){
					head = head->getNextNode();
					size--;
					return true;
				}
				else{
					SLNode<T>* j = head;
					for (SLNode<T>* i = head->getNextNode(); i !=NULL; i=i->getNextNode()){
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
		
		string toString(){
			stringstream ss;
			if(head != NULL){
				if(head->getNextNode() != NULL){
					for (SLNode<T>* i = head; i !=NULL; i=i->getNextNode()){
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
		
		unsigned int getSize(){
			return size;
		}
		
		void clear(){
			while (head != NULL){
				removeHead();
			}
		}
		
		bool removeAll(T target){
			bool coolBool = false;
		
			if(head != NULL){
				if(head->getContents() == target){
					SLNode<T>* node = head->getNextNode();
					delete head;
					head = node;
					size--;
				}
				SLNode<T>* j = head;
				for (SLNode<T>* i = head->getNextNode(); i !=NULL; i=i->getNextNode()){
					if(i->getContents() == target){
						if(i->getNextNode() != NULL){
							SLNode<T>* k = i->getNextNode();
							j->setNextNode(k);
							delete i;
							i = j;
							size--;
							coolBool = true;
						}
						else{
							
							delete i;
							
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
		
	private:
		SLNode<T>* head;
		unsigned int size;
};

// class SList{
// 	public:
// 		SList();
// 		~SList();
		
// 		void insertHead(int contents);
// 		void insertTail (int contents);
		
// 		void removeHead();
// 		void removeTail();
		
// 		void insert (int contents);
		
// 		bool removeFirst(int contents);
		
// 		void clear();
		
// 		unsigned int getSize() const;
		
// 		string toString () const;
		
// 	private:
// 		SLNode* head;
// 		unsigned int size;
// };