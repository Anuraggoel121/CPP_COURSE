#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream anu("Wfile.txt");
     string first =" LET CODING CODING CODING";
    anu << first;
    return 0;
}