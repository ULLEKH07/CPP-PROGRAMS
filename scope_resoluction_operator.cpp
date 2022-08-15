#include<iostream>

using namespace std;
int c=77;

int main(){
int a,b;

cout<<"ENTER THE VALUES:"<<endl;
cin>>a>>b;
int c =a+b;
cout<<"THE SUM IS:"<<c<<endl;
cout<<"THE GLOBAL VALUE IS:"<<::c<<endl;    //scope resoluction operator is used to to access global value

float d=34.4F;
long double e= 34.4L;
cout<<"THE SIZE OF 34.4 IS:"<<sizeof(34.4)<<endl;       //compiler in cpp considers any decimal value as double instead of float 
cout<<"THE SIZE OF 34.4f IS:"<<sizeof(34.4f)<<endl;     //hence to declare it as a float use 'f' after the value
cout<<"THE SIZE OF 34.4F IS:"<<sizeof(34.4F)<<endl;
cout<<"THE SIZE OF 34.4l IS:"<<sizeof(34.4l)<<endl;
cout<<"THE SIZE OF 34.4L IS:"<<sizeof(34.4L)<<endl;

return 0;
}