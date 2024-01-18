#include<iostream>
#include<map>
#include<string>
 
using namespace std;
 // iterator use to  to access the STL container elements and 
 //perform certain operations on them.
int main()
{
    map<string, int>  anu;
    anu["Atul"] = 58;
    anu["Rohit"] = 57;
    anu.insert( { {"Rohan", 89}, {"Akshat", 46} } );
    map<string,int> :: iterator goel;
    for(goel=anu.begin();goel!=anu.end();goel++)
    {
        cout<<(*goel).first<<" "<<(*goel).second<<"\n";
    }
}