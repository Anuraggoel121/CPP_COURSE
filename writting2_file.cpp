#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // connecting/linking our file with anu stream
    ofstream anu("Wfile2.txt");
    //getting data from user
    string name;
    cout<<"enter your name "<<endl;
    cin>>name;
    //writting string in to a file
    anu<< name + " My Name Is ";
    //cut the connection between file and anu stream
    anu.close();

    ifstream rag("Wfile2.txt");
    string st;
    rag>>st;
    cout<<"the data in file is "<<st;
    rag.close();
    return 0;
}