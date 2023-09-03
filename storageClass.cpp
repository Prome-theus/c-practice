#include<iostream>

using namespace std;

extern int x;

int main(){
    int x; //auto
    cin>>x;
    register int m;
    for(int i=0 ; i<3;i++){
        static int c = 2;
        c++;
        cout<<"value of c is : "<<c<<endl;
        m=c; 
    }
    cout << x+m << endl;
    return 0;
}