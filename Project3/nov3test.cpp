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
    
    cout << "argc = " << argc << endl;
    
    for(int i = 0; i<argc; i++){
        cout << "argv[" << i << "] " << argv[i] << endl;
    }
    
    return 0;
}

//need argc to be 2 for project,

void processFile(string filename){
    stringstream ss;
    int value = 0;
    
    ifstream fin(filename.c_str());
    if(!fin.fail()){
        //if it didn't fail opening file
        string nextline;
        while(!fin.eof()){
            getline(fin, nextline);
            char firstCharacter = nextline[0];
            switch(firstCharacter){
                case '#':
                    break;
                case 'C':
                    if (list != NULL){
                        delete list;
                    }
                    list = new DLList;
                    break;
                case 'T':
                    if(list == NULL){
                        cout << "MUST CREATE LIST INSTANCE" << endl;
                    }
                   else if(list.getSize() > 0){ //&& is short circuit
                    list->removeFront();
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
                    }
            }
        }
        fin.close();
    }
    else{
        cout << "Unable to open " << filename << " for processing." << endl;
    }
}