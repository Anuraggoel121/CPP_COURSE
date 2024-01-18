#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ifstream anu("file.txt");
    if(anu.is_open())
    {
        string text;
        int line_count=0;

        while(getline(anu,text))
        {
            line_count++;
        }
        anu.close();
        cout<<"lines = "<<line_count<<endl;
        while(anu.eof()==0)
        {
            getline(anu,text);
            cout<<text<<endl;
        }

    }
}