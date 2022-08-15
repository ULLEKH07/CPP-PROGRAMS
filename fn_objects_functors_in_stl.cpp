#include<iostream>
#include<functional>            //it is functional header file which is must if you want to use functors 
using namespace std;
// fn objects (functor): fn wrapped in a class so that it available like an object 
int main(){

int arr[]={1,4,7,8,11};
// sort(arr,arr+5);             //sorting in ascending order
 sort(arr,arr+5,greater<int>());        //sorting in descending order and a object is added
for (int i = 0; i < 5; i++)
{
    cout<<arr[i]<<endl;
}

return 0;

}