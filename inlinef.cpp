#include<iostream>

using namespace std;

inline int cube(int s) { return s * s * s; }
 
int main()
{
    int x;
    cout<<"enter the number : ";
    cin>>x;
    cout << "The cube of "<<x<<" is: " << cube(x) << "\n";
    return 0;
}