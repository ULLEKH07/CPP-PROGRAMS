#include<iostream>
using namespace std;
class shopitem{
    int id;
    float price;
    public:
    void setd(int a,float b){
        id=a;
        price=b;

    }
    void getd(){
        cout<<"the id of this item is :"<<id<<endl;
        cout<<"yhe price of this item is:"<<price<<endl;

    }
};
int main(){
int x;
float y;

shopitem *ptr =new shopitem [4];        //dynamically allocating memory and creating array of object
shopitem *ptrtemp = ptr;            //creating a second pointer to point at initial place of first pointer
for(int i=0;i<4;i++){
    cout<<"enter the id of item and price "<<i+1<<endl;
    cin>>x>>y;
    ptr->setd(x,y);
    ptr++;

}
for(int i=0;i<4;i++){
ptrtemp->getd();
ptrtemp++;
}

return 0;

}