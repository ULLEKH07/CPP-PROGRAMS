#include<iostream>
using namespace std;
class complex{

    int a,b;
    public:
     void setdata(int v1,int v2){
        a=v1;
        b=v2;
     }
     void sum(complex uk1,complex uk2){
        a=uk1.a+uk2.a;
        b=uk1.b+uk2.b;
     }
     void printnum(){

  cout<<"THE COMPLEX NUM IS :"<<a<<"+"<<b<<"i"<<endl;

     }
}
int main(){
complex uk1,uk2,uk3;
uk1.setdata(4,7);
uk1.printnum();

uk2.setdata(8,5);
uk2.printnum();

uk3.sum(uk1,uk2);
uk3.printnum();

return 0;

}