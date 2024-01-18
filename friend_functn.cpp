#include<iostream>
using namespace std;
class c2;
class c1
{
    private:
    int val1;
    public: 
    void indata(int a)
    {
        val1 = a;
    }

    void display(void)
    {
        cout<<val1<<endl;
    }
    friend void exchange(c1 & , c2 &);
};

class c2
{
    private:
    int val2;
    public:
    void indata(int a)
    {
        val2=a;
    }
    void display(void)
    {
        cout<<val2<<endl;
    }
    friend void exchange(c1 & , c2 &);
};

void exchange(c1 &x, c2 &y)
{
    int temp=x.val1;
    x.val1=y.val2;
    y.val2=temp;
}


int main()
{
    c1 oc1;
    oc1.indata(34);
    c2 oc2;
    oc2.indata(67);
    exchange(oc1,oc2);

    cout<<"the value of after exchanging become :";
    oc1.display();
    cout<<"the value of after exchanging become :";
    oc2.display();


    c1 hg;
    hg.indata(98);
    c2 gh;
    gh.indata(89);
    exchange(hg,gh);

    cout<<"the value of after exchanging become :";
    hg.display();
    cout<<"the value of after exchanging become :";
    gh.display();

    
    return 0;
}