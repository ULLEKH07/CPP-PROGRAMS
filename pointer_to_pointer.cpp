#include<iostream>
using namespace std;

int main(){
int a=7;
int *b=&a;  //pointer pointing to variable 'a'
int **c=&b;    //pointer pointing a pointer '*b'
 
cout<<"the address of a is:"<<&a<<endl;
cout<<"the address of a is:"<<b<<endl;
cout<<"the value of a is:"<<*b<<endl;
 
//pointer to pointer
cout<<"the address of b is :"<<&b<<endl;
cout<<"the address of b Is:"<<c<<endl;
cout<<"the value of b is :"<<b<<endl;
cout<<"the value of b/at address c is :"<<*c<<endl;         //address value of 'a' which has been stored into pointer 'b' 
cout<<"the value at address value (value at c)"<<**c<<endl;     //value of variable 'a'

return 0;

}