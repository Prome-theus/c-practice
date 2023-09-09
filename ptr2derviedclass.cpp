#include<iostream>

using namespace std;

class baseclass{
    public:
        int varbase;
        void display(){
            cout<<"displaying base class variable  : "<< varbase<<endl;
        }

};

class derivedclass: public baseclass{
public:
        int varderived;
        void display(){
            cout<<"displaying derived class variable  : "<< varderived<<endl;
        }
};

int main(){
    baseclass * baseclassptr;
    baseclass objbase;
    derivedclass objder;
    baseclassptr = &objder; //base class pointer pointing to derived class;
    baseclassptr->varbase =34;
    baseclassptr->varbase =34;
    baseclassptr->display();
}