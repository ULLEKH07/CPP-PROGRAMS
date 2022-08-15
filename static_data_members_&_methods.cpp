#include<iostream>
using namespace std;
class employee{
    int id;
    static int count;
    public:
    void setdata(){
        cout<<"ENTER THE ID"<<endl;
        cin>>id;
        count++;
    }
    void getdata(){
        cout<<"THE ID OF EMPLOYEE IS :"<<id<<" AND THIS IS EMPLOYEE NUMBER "<<count<<endl;

    }
     
};
int employee::count;    //syntax of declaring static variable of int return type

int main(){

employee ullekh;
ullekh.setdata();
ullekh.getdata();
return 0;

}