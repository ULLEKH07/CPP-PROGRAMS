#include<iostream>
using namespace std;
int fibonacci(int  n){
    if(n<=1){
        return 1;

    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
int n;
cout<<"ENTER THE NUMBER :"<<endl;
cin>>n;
cout<<"THE FIBONCAAI VALUE AT "<<n<<" POSITION  is:"<<fibonacci(n)<<endl;


return 0;

}