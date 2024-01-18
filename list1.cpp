#include <iostream>
#include <list>
using namespace std;
void display(list<int> &a)
{
    list<int> :: iterator anu;
    for(anu=a.begin();anu!=a.end();anu++)
    {
         cout<<*anu<<" ";
    }
}