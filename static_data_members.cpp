#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count; // becomes class variables
public:               // shared between all objects
    void setdata()
    {
        cout << "ENTER THE ID" << endl;
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "THE ID OF EMPLOYEE IS :" << id << " AND THIS IS EMPLOYEE NUMBER " << count << endl;
    }
    static void getcount(){
        cout<<"THE VALUE OF EMPLOYEE "<<count<<endl;    //static fn defined just add static before return type 
                                                        //can only access static values or variables only
    }

};                          // default valule is 0 for static variable
int employee::count = 1000; // syntax of declaring static variable of int return type

int main()
{

    employee ullekh, harry, jd;
    ullekh.setdata();
    ullekh.getdata();
    employee::getcount();
    
    harry.setdata();
    harry.getdata();
    employee::getcount();

    jd.setdata();
    jd.getdata();
    employee::getcount();
    return 0;
}