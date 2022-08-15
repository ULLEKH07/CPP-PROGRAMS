#include<iostream>
using namespace std;
class y;
class x{
    int data;
    friend void add(x,y);
    public:
    void setvalue(int value){
        data = value;
    }
};
class y{
    
    friend void add (x,y);
    int num;
    public:
    void setvalue(int value){
        num = value;
    }
};
void add(x ob1,y ob2){
    cout<<"summing datas of x and y objects  gives me "<<ob1.data + ob2.num;

}
int main(){
x a;
a.setvalue(3);

y b;
b.setvalue(5);
add(a,b);
return 0;


return 0;

}