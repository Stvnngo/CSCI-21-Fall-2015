#pragma once

#include <cstdlib>
using namespace std;



class SLNode{
	public:
		//default constructor, sets values nextNode(NULL) and contents(0)
		SLNode();
		//overloaded constructor, int parameter assigned to contents
		SLNode(int newContents);
		//destructor, sets nextNode to NULL
		~SLNode();
		
		void setContents(int newContents);
		int getContents() const;
		
		void setNextNode (SLNode* newNode);
		
		SLNode* getNextNode () const;
	private:
		//nextNode, SLNode* that points to the next node in a singly-linked list
		SLNode* nextNode;
		//contents, int used to store the data contents of this SLNode
		int contents;
};
