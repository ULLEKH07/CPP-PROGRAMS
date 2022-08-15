#include<iostream>
using namespace std;    //this is fn overloading as fn has same 
float sum(float a,float b){
    cout<<"THE FN IS USING 2 ARGUMENTS"<<endl;
    return a+b;
}

float sum(float x, float y,float z){
    cout<<"THE FN IS USING 3 ARGUMENTS"<<endl;
    return x+y+z;
}
int main(){

cout<<"THE SUM OF 4 AND 7 IS:"<<sum(4,7)<<endl;
cout<<"THE SUM OF 4, 7 AND 8 IS:" <<sum(4,7,8)<<endl;
return 0;

}