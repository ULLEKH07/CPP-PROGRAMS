#include<iostream>

using namespace std;

int main(){
int x;
int &y=x;                                           //reference varaible here is 'x' and value of y changes accordingly
cout<<"ENTER THE VALUE OF X:"<<endl;
cin>>x;
cout<<"value of x:"<<x <<"value of y:"<<y<<endl;

return 0;

}