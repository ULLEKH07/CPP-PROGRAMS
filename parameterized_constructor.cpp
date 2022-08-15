#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(int ,int);
    void printnum(){
        cout<<"the complex number is "<<a<<"+"<<b<<"i"<<endl;

    }
};
complex :: complex(int x,int y){        //parametirized constructor as it takes the parameters
    a=x;
    b=y;
}
int main(){
 
complex a(4,6);     //implicit call 


complex b=complex(5,7);     //explicit call
a.printnum();
b.printnum();


return 0;

}