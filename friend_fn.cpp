#include<iostream>
using namespace std;
class complex{
    int a,b;
    friend complex sumcomp(complex obj1,complex obj2);      //declaring friend fn which allows fn to access private members of a class
    public:
   
                                                    
    void setdata(int v1,int v2){                            //syntax : friend + name of class + fn name + arguments of that fn 
        a=v1;
        b=v2;
    }
    
    void printnum(){
        cout<<"YOUR NUMBER  IS"<<a<<"+"<<b<<"i"<<endl;

    }
};
complex sumcomp(complex obj1,complex obj2){         //this non member fn is allowed to access private members
    complex obj3;
    obj3.setdata((obj1.a + obj2.a),(obj1.b + obj2.b));      //here fn setdata was called with help of object and data members were accessed by using syntax obj_name.member_name
     return obj3;                                            //a=obj1.a +obj2.a and b=obj1.b + obj2.b
} 
int main(){
complex c1,c2,sum;
c1.setdata(4,7);
c2.setdata(5,8); 
c1.printnum();
c2.printnum();
sum=sumcomp(c1,c2);     //calling of friend fn directly without help from objects
sum.printnum();



return 0;

}
//properties of friend fn
/*
1)not in scope of class
2)since it is not in scope of the class ,it cannot be called from object of that class : 
c1.sumcomp() == invalid
3)can be invoked without help of object
4)usually contains objects as arguments:
sumcomp(complex obj1,complex obj2);
5)can be declared inside public or private section
6)it cannot acess the members directly by their names and need : object_name.member_name
to acess any member




*/