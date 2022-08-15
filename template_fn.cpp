#include<iostream>
using namespace std;
template<class t1,class t2>           //here we are using template class to store data type of -->fn .. 
float fnaverage(t1 a,t2 b){         //just replace the data type with name of class of template like t1,t2 etc.. instead of int, float,char etc..  
    float c=(a+b)/2.0;
    return c;
    }
template<class t>
void swapp(t &x,t &y){              //here in formal argument we are passing address of variable in place of pointer along with data type of it..
    x=x+y;
    y=x-y;
    x=x-y;
    
 

}

int main(){

float a;
a=fnaverage(4.4855,7.9);
cout<<"the average of numbers is:"<<a<<endl;

int x,y;
cout<<"enter the 2 values of numbers: "<<endl;
cin>>x>>y;
swapp(x,y);
cout<<x<<"  "<<endl<<y;


return 0;

}