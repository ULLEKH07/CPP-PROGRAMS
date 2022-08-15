#include<iostream>
using namespace std;
class point{
    int x,y;
    friend int dist(point uk1, point uk2);      //declaring fn as a friend fn and allowing access to private members
    public:
    point(int ,int);
    void display(){
        cout<<"the point is("<<x<<","<<y<<")"<<endl;

    }

    };
point :: point(int a,int b){    //parameterized constructor defined
    x=a;
    y=b;

}
int dist(point uk1,point uk2){      //friend fn defined
    
    int i= abs(uk1.x-uk2.x)+abs(uk1.y-uk2.y);
    return i;
    }
int main(){

//impilcit call
 point uk(4,7);
 //expilict call
 point jd=point(2,0);
uk.display();
jd.display();
int distance=dist(uk,jd);
cout<<"the distance between points is:"<<distance<<endl;

return 0;

}