#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream output("file.txt");
    ifstream input("Wfile.txt");


    if(output.is_open() && input.is_open())
    {
        string line;
        while(getline(input,line))
        {
            output<<line<<endl;;
        }
        cout<<"Copied Sucessfully!!"<<endl;
    }
    else
    {
        cout<<"File Not Found!!"<<endl;

    }

    output.close();
    input.close();
}