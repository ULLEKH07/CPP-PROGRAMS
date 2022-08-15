#include<iostream>
#include<fstream>
using namespace std;

int main(){
//connecting our file with ukout stream
ofstream ukout("sample2.txt");
string uk;
cout<<"enter your name";
cin>>uk;
//writing a string to the file
ukout<<"my name is :"<<uk;
ukout.close();

ifstream ukin("sample2.txt");
string content;
getline(ukin,content);

cout<<"the content of file is :"<<content;
ukin.close();




return 0;

}