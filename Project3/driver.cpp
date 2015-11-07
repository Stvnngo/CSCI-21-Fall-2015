/*
 * Programming Project 3
 * Created by: 
 * Steven Ngo
 * 
 * Created: 11/5/15
 * Last Modified: 11/6/15
 * Sources used:
 */

#include "DLNode.h"
#include "DLList.h"

#include <sstream>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

void processFile(string fileName);

//argv dynamic string array
//argc count of additional arguments applying, argv arguments themselves collected in an array
int main(int argc, char** argv){
    
    if (argc != 2){
        cout << "Usage: " << argv[0] << " INPUT_FILE" << endl;
    }
    else{
        string filename = argv[1];
        processFile(filename);
    }
    
    // cout << "argc = " << argc << endl;
    
    // for(int i = 0; i<argc; i++){
    //     cout << "argv[" << i << "] " << argv[i] << endl;
    // }
    
    return 0;
}

//need argc to be 2 for project,

void processFile(string filename){
    stringstream ss;
    int value = 0;
    DLList* list = NULL;
    bool kewlBool;
    
    ifstream fin(filename.c_str());
    if(!fin.fail()){
        //if it didn't fail opening file
        string nextline;
        while(!fin.eof()){
            ss.clear();
            getline(fin, nextline);
            char firstCharacter = nextline[0];
            switch(firstCharacter){
                case '#':
                    break;
                case 'C':
                    if (list != NULL){
                        delete list;
                        list = NULL;
                    }
                    list = new DLList;
                    cout << "LIST CREATED" << endl;
                    break;
                case 'X':
                    if(list == NULL){
                        cout << "MUST CREATE LIST INSTANCE" << endl;
                    }
                    else{
                        list->clear();
                        cout << "LIST CLEARED" << endl;
                    }
                    break;
                case 'D':
                    if(list == NULL){
                        cout << "MUST CREATE LIST INSTANCE" << endl;
                    }
                    else{
                        delete list;
                        list = NULL;
                        cout << "LIST DELETED" << endl;
                    }
                    break;
                case 'T':
                    if(list == NULL){
                        cout << "MUST CREATE LIST INSTANCE" << endl;
                    }
                   else if(list->getSize() > 0){ //&& is short circuit
                    list->popFront();
                    cout <<"REMOVED HEAD" << endl;
                    }
                    else{
                        cout << "LIST EMPTY" << endl;
                    }
                    break;
                case 'I':
                    if(list == NULL){
                        cout << "MUST CREATE LIST INSTANCE" << endl;
                    }
                    else{
                        ss.str(nextline.substr(2));
                        ss >> value; 
                        list->insert(value);
                        cout << "VALUE " << value << " INSERTED" << endl;
                    }
                    break;
                case 'F':
                    if(list == NULL){
                        cout << "MUST CREATE LIST INSTANCE" << endl;
                    }
                    else{
                        ss.str(nextline.substr(2));
                        ss >> value;
                        list->pushFront(value);
                        cout << "VALUE " << value << " ADDED TO HEAD" << endl;
                    }
                    break;
                case 'B':
                    if(list == NULL){
                        cout << "MUST CREATE LIST INSTANCE" << endl;
                    }
                    else{
                        ss.str(nextline.substr(2));
                        ss >> value;
                        list->pushBack(value);
                        cout << "VALUE " << value << " ADDED TO TAIL" << endl;
                    }
                    break;
                case 'A':
                    if(list == NULL){
                        cout << "MUST CREATE LIST INSTANCE" << endl;
                    }
                    else{
                        try{
                            cout << "VALUE " << list->getFront() << " AT HEAD" << endl;
                        }
                        catch (string e){
                            cout << e << endl;
                        }
                    }
                    break;
                case 'Z':
                    if(list == NULL){
                        cout << "MUST CREATE LIST INSTANCE" << endl;
                    }
                    else{
                        try{
                            cout << "VALUE " << list->getBack() << " AT TAIL" << endl;
                        }
                        catch (string e){
                            cout << e << endl;
                        }
                    }
                    break;
                case 'K':
                    if(list == NULL){
                        cout << "MUST CREATE LIST INSTANCE" << endl;
                    }
                   else if(list->getSize() > 0){ //&& is short circuit
                    list->popBack();
                    cout <<"REMOVED TAIL" << endl;
                    }
                    else{
                        cout << "LIST EMPTY" << endl;
                    }
                    break;
                case 'E':
                    if(list == NULL){
                        cout << "MUST CREATE LIST INSTANCE" << endl;
                    }
                    else{
                        ss.str(nextline.substr(2));
                        ss >> value;
                        kewlBool = list->removeAll(value);
                        if(kewlBool == true){
                            cout << "VALUE " << value << " ELIMINATED" << endl;
                        }
                        else{
                            cout << "VALUE " << value << " NOT FOUND" << endl;
                        }
                    }
                    break;
                case 'R':
                    if(list == NULL){
                        cout << "MUST CREATE LIST INSTANCE" << endl;
                    }
                    else{
                        ss.str(nextline.substr(2));
                        ss >> value;
                        kewlBool = list->removeFirst(value);
                        if(kewlBool == true){
                            cout << "VALUE " << value << " REMOVED" << endl;
                        }
                        else{
                            cout << "VALUE " << value << " NOT FOUND" << endl;
                        }
                    }
                    break;
                case 'G':
                    if(list == NULL){
                        cout << "MUST CREATE LIST INSTANCE" << endl;
                    }
                    else{
                      ss.str(nextline.substr(2));
                        ss >> value;
                        kewlBool = list->get(value);
                        if(kewlBool == true){
                            cout << "VALUE " << value << " FOUND" << endl;
                        }
                        else{
                            cout << "VALUE " << value << " NOT FOUND" << endl;
                        }  
                    }
                    break;
                case 'N':
                    if(list == NULL){
                        cout << "MUST CREATE LIST INSTANCE" << endl;
                    }
                    else{
                        cout << "LIST SIZE IS " << list->getSize() << endl;
                    }
                    break;
                case 'P':
                    if(list == NULL){
                        cout << "MUST CREATE LIST INSTANCE" << endl;
                    }
                    else{
                        if(list->getSize() > 0){
                            cout << *list << endl;
                        }
                        else{
                            cout << "LIST EMPTY" << endl;
                        }
                    }
                    break;
            }
        }
        fin.close();
    }
    else{
        cout << "Unable to open " << filename << " for processing." << endl;
    }
}