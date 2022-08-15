#include<iostream>
using namespace std;
/*
inheritance flow:
student-->test
student-->sports
test && sports--> result
hence virtual  base class is student  
*/

class student{
    protected:
    int roll;
    public:
    void setnum(int x){
        roll=x;

    }
    void printnum(){
        cout<<"your roll no is "<<roll<<endl;
    }
};
class test:virtual public student{
    protected:
    float math,physics;
    public:
    void setmarks(float c,float d){
            math=c;
            physics=d;

    }
    void printmarks(){
        cout<<"your marks in maths are:"<<math<<endl;
        cout<<"your marks in physics are: "<<physics<<endl;

    }
};
class sports :virtual public student{
    protected:
    float score;
    public:
    void setscore(float u){
        score=u;

    }
    void printscore(){
        cout<<"your pt score is:"<<score<<endl;

    }
};
class result :public test,public sports{
    private:
    float total;
    public:
    void display(){
        total=math+physics+score;
        printnum();
        printmarks();
        printscore();
        cout<<"your total score is: "<<total<<endl;
    }
};
int main(){
result uk;
uk.setmarks(77,99);
uk.setnum(7);
uk.setscore(9);
uk.display();


return 0;

}