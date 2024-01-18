#include <iostream>
#include <string.h>
using namespace std;
class cwh
{
protected:
    string title;
    float rating;

public:
    cwh(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()
     {
         cout<<"hello"<<endl;
     }
};
class cwhvedio : public cwh
{
protected:
    float vediolength;

public:
    cwhvedio(string s, float r, float v) : cwh(s, r)
    {
        vediolength = v;
    }
    void display()
    {
        cout << "title of this vedio is : " << title << endl;
        cout << "rating of this vedio is : " << rating << endl;
        cout << "length of this vedio is : " << vediolength << endl;
    }
};

class cwhtext : public cwh
{
    int words;

public:
    cwhtext(string s, float r, int t) : cwh(s, r)
    {
        words = t;
    }
    void display()
    {
        cout << "title of this vedio is : " << title << endl;
        cout << "rating of this vedio is : " << rating << endl;
        cout << "words of this vedio is : " << words << endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int word;
    // CODE FOR HARRY VEDIO
    title = "Is JUIT Is Good or Bad";
    vlen = 29.1;
    rating = 4.9;
    cwhvedio first(title, rating, vlen);
    //  first.display();
    // CODE FOR HARRY TEXT
    title = "about juit";
    word = 888;
    rating = 4.9;
    cwhtext second(title, rating, word);
    // second.display();


    cwh *tut[2];/*this code execute because we use virtual function aand here derived  
     class display run*/
    tut[0] = &first;       // if we didnt use virtual function then our base class display run
    tut[1] = &second;
    tut[0]->display();
    tut[1]->display();

    return 0;
}
/*
They cannot be static
They are accessed by object pointers
Virtual functions can be a friend of another class
A virtual function in the base class might not be used.
If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class

*/
