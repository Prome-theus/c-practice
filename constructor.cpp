#include<iostream>

using namespace std;

class Complex{ 
    int a,b;
    public:
    Complex(void);
    void printnum(){
        cout<<a<<"+"<<b<<"i";
    }
};

Complex :: Complex(void){ 
    a=10 ; b=5; 
}

int main(){
    Complex c1;
    c1.printnum();
    return(0);
}
