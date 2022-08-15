#include <iostream>
using namespace std;

// forward declaration
class complex; // that a class named complex is up ahead
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumreal(complex, complex);
    int sumcomp(complex, complex);
};

class complex
{
    int a, b;
    // friend int calculator::sumreal(complex obj1,complex obj2);
    // friend int calculator :: sumcomp(complex obj1,complex obj2);
    friend class calculator;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printnum()
    {
        cout << "THE COMPLEX NUM IS :" << a << "+" << b << "i" << endl;
    }
};
int calculator::sumreal(complex obj1, complex obj2)
{
    return (obj1.a + obj2.a);
}
int calculator::sumcomp(complex obj1, complex obj2)
{
    return (obj1.b + obj2.b);
}

int main()
{
    complex obj1, obj2;
    obj1.setdata(4, 7);
    obj2.setdata(5, 8);
    calculator sum;
    int res = sum.sumreal(obj1, obj2);
    cout << "ThE SUM OF REAL PART IS :" << res << endl;
    int resc = sum.sumcomp(obj1, obj2);
    cout << "ThE SUM OF COMP PART IS :" << resc << endl;
    return 0;
}