#include<iostream>
using namespace std;
class base{
        public:
        int varbase;
        void display(){
            cout<<"displaying the base variable :"<<varbase<<endl;

        }
};
class derived :public base{
public:

int devar;
void dipslpay(){
    cout<<"displaying the base variable : "<<varbase<<endl;
    cout<<"displaying the derived variable :"<<devar<<endl;

}
};
int main(){
base *baseptr;
base obj1;
derived obj2;
baseptr = &obj2;        //base class pointer pointing to object to derived class
baseptr->varbase=4;     //passing value of public variable of base class
//baseptr->devar=7;     //will throw as error
baseptr->display();      //here pointer is of base class so member fn of base class will be invoked ,not of the derived class 

derived *ptr;
ptr=&obj2;
ptr->devar=77;          //accessing the derived class varaible by the use of pointers  
ptr->dipslpay();

return 0;

}