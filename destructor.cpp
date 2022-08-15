#include<iostream>
using namespace std;
//Destructor never takes an argument nor does it return any value
int count=0;
class num{
    public:
    num(){
        count++;
    cout<<"this is time when constructor is called for object number"<<count<<endl;
    }
   ~num(){
    cout<<"this is time when my destructor is called for object number "<<count<<endl;
    count--;
   } 
};

int main(){
cout<<"we are inside our main fn"<<endl;
cout<<"creating first objects"<<endl;
num n1;
{                                               //when block is exited all values will be destroyed
    cout<<"entering this block"<<endl;              
    cout<<"creating two more objects"<<endl;
    num n2,n3;
    cout<<"exiting this block"<<endl;           //destructor will be called when compiler realises that there is no use for object  

}
cout<<"back to main"<<endl;
return 0;

}