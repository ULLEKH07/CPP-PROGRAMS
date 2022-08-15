#include <iostream>
#include<string>
using namespace std;
class binary
{
private:
    string s;

public:
    void inp();
    void chk_bnry();
    void conversion();
    void display();
};
void binary::inp(){
    cout<<"ENTER THE BINARY VALUE"<<endl;
    cin>>s;

}
void binary::chk_bnry(){                //as string is taken here to assign any value in it use single inverted comma  
    for(int i=0;i<s.length();i++){        //s.length() gives length of string
        if(s.at(i)!='0' && s.at(i)!='1'){   //s.at(i) is used to access individual characters of string  
            cout<<"INCORRECT BINARY VALUE :"<<endl;
            exit(0);
        }
    }
}  
    void binary::conversion(){
        for(int i=0;i<s.length();i++){
            if(s.at(i)=='0'){
                s.at(i)='1';
            }
            else if(s.at(i)=='1') {
                s.at(i)='0';
            }
        }
    }
    void binary::display(){
        cout<<"THE BINARY VALUE IS:"<<endl;
        for(int i=0;i<s.length();i++){
        cout<<s.at(i);
        
    }
    }

int main()
{
binary ullekh;  //created object
ullekh.inp();
ullekh.chk_bnry();
ullekh.conversion();
ullekh.display();
    return 0;
}