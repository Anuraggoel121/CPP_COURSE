#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    //FIRST METHOD TO WRITE

    /* string st = "anurag";
     ofstream write("file.txt");
     write<<st;
     write.close();*/
    
    // SECOND METHOD TO WRITE

    /*string st = "goel";
    ofstream write ("file.txt");
    write<<st;
    write.close();*/

    // READING IN A FILE

  /* ifstream read("file.txt");
    string st;
    read>>st;
    getline(read,st);
    getline(read,st);
    cout<<st; */

   // READ AND WRITE IN SAME FILE
   
   string st;
   ofstream out("file.txt");
   st = "HOW ARE YOU\nEVERYTHNG FINE\nHAVE A GOOD DAY";
   out<<st;
   out.close();
   ifstream in;
   in.open("file.txt");
   string tt;
  // in>>tt>>tt2;
  //  getline(in,tt);
  //  getline(in,tt);
  //  getline(in,tt);
  // cout<<tt<<tt2;
  while(in.eof()==0)
  {
    getline(in,tt);
    cout<<tt<<endl;
  }
   in.close();

}