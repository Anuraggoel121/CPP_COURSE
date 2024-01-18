#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void file()
{
    string text;
    int count=0;
    ofstream anu("file.txt");
    text="hlw Anurag \nWhat you want to buy.";
    anu<<text;


    anu.close();
    // if(anu.is_open())
    // {
    //     anu<<text;
    //     cout<<"Insert";
    // }
    // else
    // {
    //     cout<<"decline";
    // }

    ifstream goel;
    goel.open("file.txt");
    string liza;
    while(goel.eof()==0)
    {
        getline(goel,liza);
        cout<<liza<<endl;
    }

    goel.close();

}

int main()
{
    file();
}
