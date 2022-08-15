#include <iostream>
using namespace std;
class base1
{
protected:
    int base1;

public:
    void setbase1(int a)
    {
        base1 = a;
    }
};
class base2
{
protected:
    int base2;

public:
    void setbase2(int b)
    {
        base2 = b;
    }
};
class derived : public base1, public base2{     //multiple inheritance syntax 
public:
void show(){
    cout<<"the value of base1 is"<<base1<<endl;
    cout<<"the value of base2 is"<<base2<<endl;
    cout<<"the sum value  is"<<base1+base2<<endl;
}
};
int main()
{
derived uk;
uk.setbase1(7);
uk.setbase2(4);
uk.show();


    return 0;
}