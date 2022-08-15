#include<iostream>
using namespace std;
class shop{

int itemid[100];
int itemprice[100];
int counter;
public:
void initcounter(void){
    counter = 0;            //keeps track of number of total items
    }
    void setprice(void);
    void displayprice(void);

};
void shop::setprice(){
    cout<<"ENTER THE ID OF YOUR ITEM "<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"ENTER THE PRICE OF YOUR ITEM"<<endl;
    cin>>itemprice[counter];
    counter++;
}
void shop::displayprice(){ 
    for(int i=0;i<counter;i++){
        cout<<"THE PRICE OF ITEM WITH ID"<<itemid[i]<<" IS"<<itemprice[i]<<endl;

    }
}
int main(){
shop ullekh;
 ullekh.initcounter();  //initialises value of counter =0 everytime new object is created
// ullekh.setprice();
// ullekh.setprice();
ullekh.setprice();

ullekh.displayprice();
// shop uk;                 
// uk.initcounter();
// uk.setprice();
// uk.displayprice();


return 0;

}