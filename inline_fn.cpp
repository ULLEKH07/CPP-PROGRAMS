#include<iostream>
using namespace std;

inline int product(int a,int b){        //just add word inline ahead of fn return type to make it inline fn
   static int c=0;                      //static variable declared and its value remains saved inside fn
   c=c+1;    //value of c will increase by 1 each time fn runs  //next time when fn will run the value of c will be retained
   
    return a*b+c;                          //it replaces the calling of fn with the entire actual code of fn in compile time
}                                       //t is used when fn has very few lines of code
int main(){                              //not used in case of recursion fn and static variable like here for example
int x,y;
cout<<"ENTER THE VALUES:"<<endl;
cin>>x>>y;
cout<<"the product is :"<<product(x,y)<<endl;
cout<<"the product is :"<<product(x,y)<<endl;
cout<<"the product is :"<<product(x,y)<<endl;
cout<<"the product is :"<<product(x,y)<<endl;
cout<<"the product is :"<<product(x,y)<<endl;
cout<<"the product is :"<<product(x,y)<<endl;



return 0;

}