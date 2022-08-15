#include<iostream>
using namespace std;

int main(){
enum MEAL{breakfast,lunch,dinner};      //assigning break=0,lunch=1,dinner=2
MEAL m1=lunch;
cout<<m1<<endl;
cout<<(m1==1)<<endl;    //condition check using conditional operator for true returns 1
cout<<(m1==2)<<endl;    //condition check using conditional operator for false returns 0
cout<<breakfast<<endl;
cout<<lunch<<endl;
cout<<dinner<<endl;

return 0;

}