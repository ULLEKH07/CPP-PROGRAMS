#include<iostream>

using namespace std;



int main(){
    int a=5,b=7;
    cout<<"OPERATION IN C++:"<<endl;
    cout<<"Following are the types of operators in c++"<<endl;
    //ARITHMETIC OPERATOR
    cout<<"The value of a+b is "<<a+b<<endl;
    cout<<"the value of a-b is "<<a-b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a/b is"<<a/b<<endl;
    cout<<"the value of a%b is"<<a%b<<endl;
    cout<<"The value of a++ is"<<a++<<endl; //prints the initial value and increments afterwards
    cout<<"The value of a-- is"<<a--<<endl; //prints incremented value as it had post increment effect and decrements it afterwards 
    cout<<"The value of ++a is"<<++a<<endl; //immediate increment of decremented value sa it had post decrement effect and prints it
    cout<<"The value of --a is"<<--a<<endl; //immediate decrement of value and prints it
    //LOGICAL OPERATORS
    cout<<"The value of this logical not operator is: "<<(!(a==b))<<endl;
    cout<<"The value of this logical and operator is:"<<((a==b) && (a>b))<<endl;
    cout<<"THe value of this logiacal or operator is:"<<((a==b) || (a>b))<<endl;


return 0;

}