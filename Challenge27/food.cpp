#include <iostream>
using namespace std;
//inheritance

class Food {
    public:
        Food (string newName="FOOD"): name (newName){
            cout << "Food::Food" << endl;
        }
        
        virtual ~Food(){
            cout << "Food::~Food" << endl;
        }
        //virtual will take care of any layers
        
        string getName(){
            return name;
        }
    private:
        string name;
};

class Fruit : public Food {
    public:
        Fruit (string newName= "FRUIT") : Food(newName){
            cout << "Fruit::Fruit" << endl;
            
            properties = new bool[5];
        }
       virtual ~Fruit (){
            cout << "Fruit::~Fruit" << endl;
            
            delete[] properties;
        }
    private:
        bool* properties;
};

int main(){
   Food* f1 = new Fruit("Kiwi!");
   cout << f1->getName() << endl;
   delete f1;
  
    
   
    return 0;
}