#include<iostream>
#include<map>
#include<string>
using namespace std;
//map is an associative array
int main(){
map <string,int> mapmarks;
mapmarks["ullekh"]=98;
mapmarks["rohan"]=67;
mapmarks["jd"]=78;

map<string,int> ::iterator it;
mapmarks.insert({{"kozume",168.230},{"kuroo",453.12}});
for(it=mapmarks.begin();it!=mapmarks.end();it++){

cout<<(*it).first<<" "<<(*it).second<<"\n";
}
cout<<"the size is :"<<mapmarks.size()<<endl;
cout<<"the size is: "<<mapmarks.max_size()<<endl;
cout<<"the size is :"<<mapmarks.size()<<endl;

return 0;

}