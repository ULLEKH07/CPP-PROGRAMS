#include<iostream>
using namespace std;
class base{
        public:
        int varbase=4;
         virtual void display(){
            cout<<"1 displaying the base variable :"<<varbase<<endl;

        }
};
class derived : public base{
public:

int devar=7;
void display(){
    cout<<"2 displaying the base variable : "<<varbase<<endl;
    cout<<"2 displaying the derived variable :"<<devar<<endl;

}
};
int main(){
base *baseptr;
base obj1;
derived obj2;
baseptr = &obj2;        //able to access methods and data members of derived class via its object unlike before where only pointer was able to access its own class methods and data members
baseptr->display();      

return 0;

}