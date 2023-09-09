#include<iostream>

using namespace std;

class student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        }
        void print_number(void){
            cout<<"your roll number is "<<roll_no<<endl;
        }
};

class test : virtual public student{
    protected:
        float maths, physics;
    public: 
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }

        void print_marks(void){
            cout<<"You result is here : "<<endl<< "maths :"<<maths<<endl<<"physics : "<<physics<<endl;
        }
};

class sports: virtual public student{
    protected:
        float score;
    public:
        void set_Score(float sc){
            score = sc;
        }

        void print_score(void){
            cout<<"your pt score is "<<score<<endl;
        }
};

class result : public test, public sports{
    private:
        float total;
    public:
        void display(void){
            total =  maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<<"your total score is :"<<total<<endl;
        }  
};

int main(){
    result harry;
    harry.set_number(4549);
    harry.set_marks(78.2,99.4);
    harry.set_Score(9);
    harry.display();
    
    return 0;
}