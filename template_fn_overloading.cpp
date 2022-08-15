#include<iostream>
using namespace std;

void display(int x){
    cout<<"this is regular fn with integer argument"<<endl;

}

void display(float x){
    cout<<"this is regular fn with float arguments"<<endl;

}
template<class t>
void display(t x){
    cout<<"this is templatized fn"<<endl;
}

int main(){
    float c=7.77;            //in c++ any decimal value is considered of double data type thats why i have externally declared it as float as you can see it
display(4);
display(c);             //here if directly any decimal value had beeen assigned then templatized fn will be invoked here instead of fn with float arguments
display('u');

return 0;

}