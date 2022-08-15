#include<iostream>
using namespace std;
class complex{
 int a,b;
 public:
 //creating a constructor
//constructor is a special member fn with same name as of the class  
 //it is used to initialise the objects of its class
    complex(void);  //constructor declaration
                  //it is automatically invoked/called
    void printnum(){
        cout<<"the number is "<<a<<"+"<<b<<"i"<<endl;

    }


};
complex :: complex(void){   //default constructor as it takes no argument
    a=10;
    b=7;
    cout<<"constructor invoked "<<endl;

}
int main(){
complex c1,c2,c3;
c1.printnum();
c2.printnum();
c3.printnum();

return 0;

}


//characteristics of constructor
//1)it should be declared in the public section of class
//2)they are automatically invoked whenever the object is created
//3)they cannot return values and do not have return types
//4)it can have default arguments
//5)we cannot refer to their address  