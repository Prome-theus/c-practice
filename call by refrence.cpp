#include<iostream>

using namespace std;

void func(int *a , int *b){
    int temp = *a;
        *a = *b;
        *b = temp;
}

void swapf(int &a, int &b){
    int temp = a;
        a = b;
        b = temp;
}

int main(){
    int x,y;
    cout<<"enter the two numbers : ";
    cin>>x>>y;
    cout<<"two numbers are : "<<x<< " "<<y<<endl;
    func(&x,&y);
    cout<<"Value of x is: "<<x<<endl;  
    cout<<"Value of y is: "<<y<<endl;  
    cout<<"=============================="<<endl;
    swapf(x,y);
    cout<<"Value of x is: "<<x<<endl;  
    cout<<"Value of y is: "<<y<<endl;  

    return 0;
}