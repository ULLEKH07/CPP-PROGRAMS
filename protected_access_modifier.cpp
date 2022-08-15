#include<iostream>
using namespace std;
class base{
    private:
    int a;
    protected:
    int b;

};
class derived:protected base{
    
};


int main(){

base b;
derived d;
//cout<<d.b;      //will not work as it is protected in both base as well as derived class 

return 0;

}