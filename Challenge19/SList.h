#pragma once

#include "SLNode.h"
#include <string>
using namespace std;

class SList{
	public:
		SList();
		~SList();
		
		void insertHead(int contents);
		void insertTail (int contents);
		
		void removeHead();
		void removeTail();
		
		void clear();
		
		unsigned int getSize() const;
		
		string toString () const;
		
	private:
		SLNode* head;
		unsigned int size;
};