#include<iostream>
using namespace std;
// base class
class employee{
    
    
    public:
    int id;
    float salary;
    employee(){}        //default constructor 
    employee(int inid){ //parameterized constructor
        id=inid;
        salary=77.0;
    }
};
//derived class syntax
//class derived_class_name :{{ visibility-mode }} {{base class name}}

class programmer: public employee {
    public:
    int languagecode = 9;
    programmer(int inid){       //parameterized constructor
        id=inid;
    }
    void getdata(){
        cout<<id<<endl;

    }
};
int main(){

employee harry(7),uk(77);
cout<<harry.salary<<endl;
cout<<uk.salary<<endl;
programmer skillf(10);
cout<<skillf.languagecode<<endl;
cout<<skillf.id<<endl;
skillf.getdata();


return 0;

}