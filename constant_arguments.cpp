#include<iostream>
using namespace std;

float moneyreceived(int money,float factor=1.5){    //here we have taken formal argument as constant hence constant arguments
return money*factor;

}
int main(){                     //here only one argument is passed in case 1 hence constant argument declared above is used 
int money=10000;                //in case 2 the constant argument is overwritten by new argument 
cout<<"if you have "<<money<<"rs in your bank you will recieve money "<<moneyreceived(money)<<"rs after 1 year"<<endl;
cout<<"if you are VIP and  have "<<money<<"rs in your bank you will receive money "<<moneyreceived(money,1.7)<<"rs in your bank after 1 year"<<endl;
return 0;

}