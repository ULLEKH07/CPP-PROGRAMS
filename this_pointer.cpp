#include<iostream>
using namespace std;
class uk{
    int a;
    public:
    uk & setd(int a){
        this->a=a;
        return *this;       //returns the object to which 'this' pointer is being pointed 
    }
    void getd(){
        cout<<"the value of a is: "<<a<<endl;

    }
};
int main(){
uk *p= new uk;
p->setd(4);
p->getd();

uk u;
u.setd(7).getd();




return 0;

}