#pragma once

#include <cstdlib>
using namespace std;

class BSTNode{
	private:	

		BSTNode* leftChild;
		BSTNode* rightChild;
		int contents;

	public:

		BSTNode();
		BSTNode(int newContents);
	
	
		~BSTNode();
	
		void setContents (int newContents);
	
		int getContents () const;
		int& getContents ();
	
		void setLeftChild (BSTNode* newNode);
		void setRightChild (BSTNode* newNode);
		
		
		BSTNode* getLeftChild () const; //by value
		BSTNode*& getLeftChild ();		//by reference
	
		BSTNode* getRightChild () const;
		BSTNode*& getRightChild ();
		
};


// private data members:

// 	leftChild, BSTNode*
// 	rightChild, BSTNode*
// 	contents, int used to store the data contents of this BSTNode

// public function interface:

// 	default constructor, sets values leftChild(NULL), rightChild(NULL), and contents(0)
// 	overloaded constructor, int parameter assigned to contents
	
// 	destructor, sets leftChild and rightChild to NULL
	
// 	void setContents (int)
	
// 	int getContents () const
// 	int& getContents ()
	
// 	void setLeftChild (BSTNode*)
// 	void setRightChild (BSTNode*)
	
// 	BSTNode* getLeftChild () const
// 	BSTNode*& getLeftChild ()
	
// 	BSTNode* getRightChild () const
// 	BSTNode*& getRightChild ()