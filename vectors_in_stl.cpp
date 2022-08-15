#include <iostream>
#include <vector>
using namespace std;
template<class t>

void display(vector<t> &v)
{
    cout<<"displaying this vector "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "  ";
    }
    cout << endl;
}
int main()
//way to create a vector :
{
    vector<int> vec1;        // zero length vector
    vector<char> vec2(4);    // 4 element character  vector
display(vec1);
vec2.push_back('5');        //method for vector
display(vec2);
    vector<char> vec3(vec2); // 4 element character vector from vec2
display(vec3);
vector<int> vec4(6, 3);     // 6 element  vectorof 3s
display(vec4);
cout<<vec4.size();



    // int element, size = 5;
    // cout << "enter the size of  your vector";
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "enter the element to add this to a vector";

    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // display(vec1);
    // vector<int>::iterator iter = vec1.begin();
    // vec1.insert(iter + 1, 5, 566);
    // display(vec1);

    return 0;
}