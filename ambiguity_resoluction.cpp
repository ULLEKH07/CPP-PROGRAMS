#include<iostream>
using namespace std;
class base1{
public:
void greet(){
    cout<<"how are you ?"<<endl;

}
};
class base2{
public:
void greet(){
    cout<<"kaise ho ?"<<endl;

}
};
class derived : public base1,public base2{
    int a;
    public:
    void greet(){
        base1::greet();         //ambiguity solved
    }                            //ambiguity resolved

};
int main(){
base1 obj;
    base2 objj;
    obj.greet();
    objj.greet();
    derived d;
    d.greet();          //ambiguity created


return 0;

}