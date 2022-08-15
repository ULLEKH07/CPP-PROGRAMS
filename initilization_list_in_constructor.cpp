#include<iostream>
using namespace std;
class test{
    int a,b;
    public:
   
    //test(int i,int j) : b(j),a(b+j)   -->will throw garbage value as 'a' is initilized first before b 
    test(int i,int j) : a(i),b(a+j)
    
    {
        cout<<"consturctor executed "<<endl;
        cout<<"value of a is:"<<a<<endl;
        cout<<"value of b is "<<b<<endl;
    };
};
int main(){
test uk(4,7);

return 0;

}