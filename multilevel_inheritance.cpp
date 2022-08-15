#include<iostream>
using namespace std;
class student{
    protected:
    int roll;
    public:
    void setroll(int);
    void getroll();

};
void student::setroll(int r){       //method defined outside of class (it was only declared inside of class therefore we defined it later on )
    roll=r;

}
void student::getroll(){                        //method defined outside of class (it was only declared inside of class therefore we defined it later on )
    cout<<"the roll number is "<<roll<<endl;
    }
    class exam : public student{        //inherited class exam from base class student
        protected:
        float math;
        float physics;
        public:
        void setmarks(float,float);
        void getmarks();

    };
    void exam::setmarks(float x,float y){       //method defined outside of class (it was only declared inside of class therefore we defined it later on )
        math=x;
        physics= y;
    }
    void exam::getmarks(){                                  //method defined  outside of class (it was only declared inside of class therefore we defined it later on )
        cout<<"the marks in maths are : "<<math<<endl;
        cout<<"the marks in physics are :"<<physics<<endl;

    }
    class result:public exam{           //inherited class result from exam base class
        float percentage;
        public:
        // void perc(float x,float y){
        //     percentage=x+y/2;
        // }
        void display(){
            getroll();              //calling of member fn of diferent class 
            getmarks();

            cout<<"your percentage is :"<<(math+physics)/2<<endl;

        }

    };
int main(){
result uk;
uk.setroll(7);
uk.setmarks(98,97);
uk.display();


return 0;

}