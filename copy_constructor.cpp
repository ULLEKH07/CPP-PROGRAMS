#include<iostream>
using namespace std;
class number{
int a;
public:
number(){}
number(int x){
    a=x;
}
//when no copy constructor is found ,compiler supplies its own copy constructor to every class
number(number &obj){
    cout<<"copy constructor called "<<endl;
    a=obj.a;
}
void display(){
    cout<<"the number for this object is "<<a<<endl;

}

};
int main(){
number x,y,z(45),z1(x),z2;     //reference value of oject x given to object z1
x.display();               // z1 resembles z or x respectively 
y.display();
z.display();
//z1.display();   //copy constructor invoked

z2=z;           //copy constructor not called
number z3(z);    //copy constructor called
//z2.display();
z3.display();

return 0;

}