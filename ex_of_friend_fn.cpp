#include <iostream>
using namespace std;
class c2;
class c1
{
    int value;
    friend void exchange(c1 &, c2 &);

public:
    void intdata(int a)
    {
        value = a;
    }
    void display()
    {
        cout << value << endl;
    }
};
class c2
{
    friend void exchange(c1 &, c2 &);
    int val;

public:
    void intdata(int a)
    {
        val = a;
    }
    void display()
    {
        cout << val << endl;
    }
};
void exchange(c1 &x, c2 &y)
{                      // reference object taken from class c1 and c2
    int tmp = x.value; // calling by reference
    x.value = y.val;
    y.val = tmp;
}
int main()
{
    c1 uk;
    c2 jd;
    uk.intdata(77);
    jd.intdata(44);

    exchange(uk, jd);
    cout << "the value after exchanging becomes : ";
    uk.display();
    cout << "the value after exchanging becomes : ";
    jd.display();

    return 0;
}