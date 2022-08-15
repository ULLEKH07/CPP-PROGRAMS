#include<iostream>
using namespace std;

int main(){
float *ptr= new float(7);

delete ptr;                 //frees the dynamically allocated space
cout<<"the value at address ptr is:"<<*(ptr)<<endl;

int *arr= new int[3];       //allocates memory space dynamically
arr[0]=4;
arr[1]=77;
arr[2]=7;

delete[]arr;            //frees the dynamically allocated space
cout<<"value of arr[0] :"<<arr[0]<<endl;
cout<<"value of arr[1] :"<<arr[1]<<endl;
cout<<"value of arr[2] :"<<arr[2]<<endl;


return 0;

}