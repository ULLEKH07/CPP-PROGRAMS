#include<iostream>
using namespace std;
template<class t1=int ,class t2=float>       //template with default parameters as class have predetermined data type
    class ullekh{
        public:
        t1 a;
        t2 b;
        ullekh( t1 x,t2 y){
            a=x;
            b=y;

        }
        void display(){
            cout<<"the value of a is:"<<a<<endl;
            cout<<"the value of b is:"<<b<<endl;

        }
    };
int main(){
ullekh /*<>*/uk('a',457.0);             //braces are left blank it means no arguments are passed   
uk.display();                              //here i have commented the brace to show that any argument gets assigned to data members if brace is not placed at it


return 0;

}