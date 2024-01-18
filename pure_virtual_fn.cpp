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
    virtual void display()=0; // known as do-nothing function
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
    title = "Is JUIT Is Good or Bad";
    vlen = 29.1;
    rating = 4.9;
    cwhvedio first(title, rating, vlen);
    title = "about juit";
    word = 888;
    rating = 4.9;
    cwhtext second(title, rating, word);
    cwh *tut[2];
    tut[0] = &first;     
    tut[1] = &second;
    tut[0]->display();
    tut[1]->display();
    return 0;
}