#include<iostream>
#include<list>
using namespace std;
void display(list<int> &lst){
    list<int> ::iterator it;
    for (it=lst.begin(); it!=lst.end(); it++)
    {
        cout<<*it<<endl;
    }
    
}
int main(){
list<int> list1;
list1.push_back(4);
list1.push_back(7);
list1.push_back(8);
list1.push_back(11);
// list<int >::iterator iter=list1.begin();     //defining of iterator using  list container and pointing its pointer at first place of the list
// cout<<*iter<<endl;
// iter++;
// cout<<*iter<<endl;
// list1.remove(8);                     //methods for removing elements from the list
// list1.pop_back();
// list1.pop_front();
list1.sort();                       //sorting the list using the sort method 
display(list1);

list<int> list2(4);
list<int> :: iterator iter=list2.begin();
*iter = 45;
iter++;
*iter=6;
iter++;
*iter=9;
iter++;
display(list2);
list1.merge(list2);                 //merging two lists using merge method 
cout<<"list 1 after merging :";
list1.sort();                        //displaying the sorted merged list1 after the usage of merge method
display(list1);

list1.reverse();                    //reversing of list using the reverse method 
display(list1);
return 0;

}