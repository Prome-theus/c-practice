#include<iostream>

using namespace std;

class Complex{ 
    int a,b;
    public:
        Complex(int x ,int y);
        void printnum(){
        cout<<a<<"+"<<b<<"i";
        }
};

Complex :: Complex(int x, int y){ 
    a=x; 
    b=y; 
}

int main(){
    Complex c1(4,5);
    c1.printnum();
    return(0);
}
