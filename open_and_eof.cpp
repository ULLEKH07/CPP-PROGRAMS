#include<iostream>
#include<fstream>

using namespace std;

int main(){
ofstream ukout;
ukout.open("sample1.txt");
ukout<<"this is me";
ukout.close();

ifstream ukin;
string st;
ukin.open("sample1.txt");
// ukin>>st;
// getline(ukin,st);
// cout<<st;


//member fn way for reading a file till end of file 
while(ukin.eof()==0){
    getline(ukin,st);
    cout<<st<<endl;

}
ukin.close();
return 0;

}