#include<iostream>
using namespace std;
struct employee{
    int id;
    char favchar[20];
    float salary;
};
int main(){

struct employee harry;
cout<<"enter id:    favcharacter:   salary:"<<endl;
cin>>harry.id>>harry.favchar>>harry.salary;
cout<<harry.id<<"   "<<harry.favchar<<"     " <<harry.salary<<"   "<<endl;
return 0;
}