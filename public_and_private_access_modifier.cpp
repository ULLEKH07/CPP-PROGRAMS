#include<iostream>
using namespace std;
class employee{
    private:
        int a,b,c;      //data members are declared private 
    public:
        int d,e;        //data members are declared public
    void pri(int a1,int b1,int c1);     //declaration of fn
    void pub(){                          //fn defined   
        cout<<"THE VALUE OF A IS:"<<a<<endl;
        cout<<"THE VALUE OF B IS:"<<b<<endl;
        cout<<"THE VALUE OF C IS:"<<c<<endl;
        cout<<"THE VALUE OF D IS:"<<d<<endl;
        cout<<"THE VALUE OF E IS:"<<e<<endl;
        }
};
void employee :: pri(int a1,int b1,int c1){     //syntax of decalring class fn outside of class 
    a=a1;                                       //return type of fn+ name of class + scope resoluction operator + name of fn
    b=b1;
    c=c1;

} 
int main(){

employee ullekh;    //created object same syntax like that of structure 
 ullekh.d=77;
 ullekh.e=44;
ullekh.pri(4,7,13);     //accessing class fn by object

ullekh.pub();
return 0;

}