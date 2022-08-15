#include<iostream>
using namespace std;
/*
case1:
class b: public a{
    //order of execution of constructor -->firstA() and B()
    case2:
    class A:public b,public c{
        //ordeer of execution of constructor -->B() ,C(),AND A()
    };
    case3:

    class A: public b,virtual public c{
        //ordeer of execution of constructor -->C(), b() and a()
    };
};
*/

class base1{
    int data;
    public:
    base1(int i){
        data=i;
        cout<<"base1 constructor invoked"<<endl;

    }
    void printdatab1(){
        cout<<"the value of data1 is :"<<data<<endl;

    }
};
class base2{
    int data;
    public:
    base2(int i){
        data=i;
        cout<<"base2 constructor invoked"<<endl;

    }
    void printdatab2(){
        cout<<"the value of data2 is :"<<data<<endl;

    }
};
class derived : public base1, public base2{
    int derived1,derived2;
    public:
    derived(int a,int b,int c,int d) :base1(a),base2(b){
        derived1=c;
        derived2=d;
        cout<<"derived class constructor is invoked"<<endl;

    }
    void printdatadev(){
        cout<<"value of derived1 is : "<<derived1<<endl;
        cout<<"value of derived2 is : "<<derived2<<endl;
    }
};
int main(){

derived uk=derived(1,2,3,4);
uk.printdatab1();
uk.printdatab2();
uk.printdatadev();

return 0;

}