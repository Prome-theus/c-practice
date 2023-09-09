#include<iostream>

using namespace std;

class baseclass{
    public:
        int varbase=1;
        virtual void display(){
            cout<<"1 displaying base class variable  : "<< varbase<<endl;
        }

};

class derivedclass: public baseclass{
public:
        int varderived=2;
        void display(){
            cout<<"2 displaying derived class variable varbase  : "<< varbase<<endl;
            cout<<"2 displaying derived class variable varderived : "<< varderived<<endl;
        }
};

int main(){
    baseclass * baseclassptr;
    baseclass objbase;
    derivedclass objder;

    baseclassptr = &objder;
    baseclassptr ->display();
}