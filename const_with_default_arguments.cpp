#include<iostream>
using namespace std;
class simple{
    int data1,data2,data3;
    public:
    simple(int a,int b=9,int c=8){      //constructor with default argument  ex:"int =9"
    data1=a;
    data2=b;
    data3=c;
        }
    void printdata();
};
void simple::printdata(){
cout<<"the value of data is "<<data1<<" and "<< data2<<"and "<<data3<<endl;

}
int main(){
simple s(4);
s.printdata();


return 0;

}