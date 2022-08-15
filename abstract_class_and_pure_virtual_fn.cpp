#include<iostream>
#include<string.h>
using namespace std;
class CWH{                              //abstract base class containing one virtual fn
    protected:
    string title;
    float rating;
    public:
    CWH(string s,float r){
        title = s;
        rating=r;

    }
       virtual void display()=0;     //do nothing fn --> pure virtual fn
};
class chvideo : public CWH{
    float vidlen;
    public:
    chvideo(string s, float r,float vl) : CWH(s,r){
        vidlen=vl;

    }
     void display(){
        cout<<"this ia an amazing  video with title :"<<title<<endl;
        cout<<"ratings: "<<rating<<endl;
        cout<<"length of video is :"<<vidlen<<endl;


    }
};
class chtext : public CWH{
    int words;
    public:
    chtext(string s, float r,int wc) : CWH(s,r){
        words=wc;

    }
    void display(){
        cout<<"this ia an amazing  video with title: "<<title<<endl;
        cout<<"ratings: "<<rating<<endl;
        cout<<"no of words  of video is :"<<words<<endl;
        
    }
};
int main(){
string title=new char[20];
float rating,vlen;
int words;

title="django tutorial";
vlen=7.77;
rating=4;
words=7477;
chvideo uk(title ,rating,vlen);     //for class chvideo
uk.display();
chtext ukk(title, rating,words);    //for class chtext
ukk.display();



 return 0;
}