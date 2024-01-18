#include<iostream>
#include<vector>
using namespace std;
template<class t>
void display(vector<t> &a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> vec1; // zero lenth
    vector<char> vec2(4);//4 element character vector
    vector<char> vec3(vec2);//4elemnt character vector form vec2
    vector<int> vec4(6,1);//6element vector of 1
    //display(vec1);
    vec3.push_back('5');
    //display(vec2);
    display(vec3);
    //display(vec4);
}