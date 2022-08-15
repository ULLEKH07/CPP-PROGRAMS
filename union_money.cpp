#include<iostream>
using namespace std;
union money{
    int rice;   //4bytes
    char car;   //1bytes            //we can only access any one variable at a time 
    float pounds;   //4bytes        //it is used for better memory management 

};
int main(){ 
union money m1;
m1.rice=77;
//m1.car='u';           //when m1.car is uncommented it overrides m1.rice leading to garbage value of it
cout<<m1.rice<<endl; 

return 0;

}