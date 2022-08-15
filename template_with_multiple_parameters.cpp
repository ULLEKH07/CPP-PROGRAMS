#include<iostream>
using namespace std;
/*
template with multiple parameters <class t1,class t2>
class ,name of class
*/
template <class t1, class t2>       //late specification of data type by the use of template 
class myclass{                      //using of more than one custom data type
    public:
    t1 data1;
    t2 data2;
    myclass(t1 a,t2 b){
        data1=a;
        data2=b;

    }
    void display(){
        cout<<this->data1<<" "<<this->data2;

    }
};
int main(){
myclass <int ,float>uk(7,7.7);  //data type externally you have to define in main fn
uk.display();


return 0;

}