#include "SLNode.h"
#include "SList.h"
#include <string>
using namespace std;

int main(){


    //SList<int>* list = new SList<int>;
    //list->pushFront(99);




    SLNode<int> node1;
    
    node1.setContents(99);
    int x = node1.getContents();
    
    
    SLNode<string> node2("hello");
    //& because setNextNode takes a pointer
    // cannot do this node2.setNextNode(&node1); node2 is string, node1 is int
    SLNode<string>* tmp = node2.getNextNode();
    
    
    return 0;
}