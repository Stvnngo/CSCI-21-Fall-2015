#pragma once

#include <cstdlib>
using namespace std;

//T is unknown datatype
//some compilers have trouble with templates in two seperate files, to garuntee no problems put everything in header.
template <class T>
class SLNode{
	public:
		SLNode () 
		: nextNode(NULL) //hard to initialize T, so don't
		{}
		
		SLNode(T newContents)
		: nextNode(NULL), contents(newContents){}
		
		void setContents (T newContents){
			contents = newContents;
		}
		
		T getContents(){
			return contents;
		}
			
		void setNextNode (SLNode* newNextNode){
			nextNode = newNextNode;
		}
		
		SLNode* getNextNode () const{
			return nextNode;
		}
	private:
		SLNode* nextNode;
		T contents;	
	
};

// class SLNode{
// 	public:
// 		//default constructor, sets values nextNode(NULL) and contents(0)
// 		SLNode();
// 		//overloaded constructor, int parameter assigned to contents
// 		SLNode(int newContents);
// 		//destructor, sets nextNode to NULL
// 		~SLNode();
		
// 		void setContents(int newContents);
// 		int getContents() const;
		
		// void setNextNode (SLNode* newNode);
		
		// SLNode* getNextNode () const;
// 	private:
// 		//nextNode, SLNode* that points to the next node in a singly-linked list
// 		SLNode* nextNode;
// 		//contents, int used to store the data contents of this SLNode
// 		int contents;
// };