#include<iostream>
using namespace std;
class complex{
int a,b;
public:
complex (){    //default constructor
    a=0;
    b=0;
}
complex(int x,int y){  //for two parameters     
    a=x;
    b=y;

}
complex (int x){    //for only one parameter
    a=x;
    b=0;
}
void printnum(){
cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;


}


};
int main(){
complex c1(4,7);    //two parameters
c1.printnum();      
complex c2(8);      //one parameter
c2.printnum();
complex c3;         //no parameters
c3.printnum();
return 0;

}