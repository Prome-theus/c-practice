#include<iostream>

using namespace std;

class employee{
    private:
        int id;
        static int count;
    public:
        static void get_count(void){
            cout<<count;
        }

};

int employee :: count = 1000;

int main(){
    employee::get_count();
    return 0;
}