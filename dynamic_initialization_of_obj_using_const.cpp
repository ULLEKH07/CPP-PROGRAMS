#include<iostream>
using namespace std;
class BankDeposit{
int principal;
int years;
float interestrate;
float returnvalue;

public:
BankDeposit(){}                     //will throw error if it wasnot declared
BankDeposit(int p,int y,int r);     //r can be a value like 0.04 
BankDeposit(int p,int y,float r);     //r can be a value like 14%
void show();
};
BankDeposit :: BankDeposit(int p,int y,float r){
    principal = p;
    years=y;
    interestrate= r;
    returnvalue = principal;
    for(int i=0;i<y;i++){
        returnvalue = returnvalue*(1+interestrate);
    }
}
 BankDeposit::BankDeposit(int p,int y,int r){
    principal = p;
    years=y;
    interestrate= float (r)/100;
    returnvalue = principal;
for(int i=0;i<y;i++){
    returnvalue=returnvalue*(1+interestrate);
}
}
void BankDeposit:: show(){
    cout<<"principal amount was "<<principal<<endl<<"return value after "<<years<<" years is "<<returnvalue<<endl;

}

int main(){
BankDeposit uk,jd,pp;
int p,y;
float r;
int R;
cout<<"enter the value of principal amount, year and rate "<<endl;
cin>>p>>y>>r;
uk = BankDeposit(p,y,r);
uk.show();

cout<<"enter the value of principal amount, year and rate "<<endl;
cin>>p>>y>>R;
jd=BankDeposit(p,y,R);
jd.show();

pp.show();      //will give garbage value



return 0;

}