#include <iostream>

using namespace std;

class test{
    int a;
    int b;
    public:
        // which ever declared first must initiallised first
        // test(int i, int j) : a(i), b(j) // initiallisation list in constructors
        // test(int i, int j) : a(i), b(a+j)
        test(int i, int j) : a(i), b(2*j)
        {
            cout<<"constructor exceuted"<<endl;
            cout<<"value of a is "<<a<<endl;
            cout<<"value of b is "<<b<<endl;
        }
};

int main()
{
    test t(5, 9);
    return (0);
}    