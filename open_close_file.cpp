#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream out;
    out.open("Wfile.txt");
    out<<"this is new data\n";
    out<<"this is  week ago data\n";
    out<<"this is a months ago data";
    out.close();
    return 0;
}