#include<iostream>
#include<fstream>
using namespace std;

/*
the useful classes for working with files in c++ are :
1 fstreambase
2 ifstream   --> are derived form fstreambase
3 ofstream  --> are derived form fstreambase 
*/
// in order to work with files in c++, you will have to open it ,primarily there are 2 ways to open a file:
// 1 using the __cpp_delegating_constructors
// 2 using the member fn open() of the class 

int main(){
 string st1="ULLEKH CHAUDHARI";
 string st2;
//  opening file using constructor and writing it
ofstream out("sample1.txt");
out<<st1;

//opening files using constructor and reading it
 ifstream in("sample2.txt");
//  in>>st2;
 getline(in,st2);
 cout<<st2;
return 0;

}
