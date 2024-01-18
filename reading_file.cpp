#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream read("Rfile.txt");
    string st;
    read>>st;
    getline(read,st);
    getline(read,st);
    cout<<st;
    return 0;
}