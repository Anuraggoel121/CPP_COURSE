#include<iostream>
using namespace std;
class student
{
    protected:
    int rool_no;
    public:
    void set_rool_no(int);
    void get_rool_no(void);
};
void student :: set_rool_no(int a)
{
    rool_no = a;
}
void student ::  get_rool_no()
{
    cout<<"the rool_no is : "<< rool_no <<endl;
}

class exam : public student
{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float,float);
    void get_marks(void);
};
void exam :: set_marks(float b,float c)
{
    maths = b;
    physics = c;
}
void exam :: get_marks()
{
    cout<<"the marks obtained in maths are : "<<maths<<endl;
    cout<<"the marks obtained in physics are : "<<physics<<endl;
}

class result : public exam
{
    float percentage;
    public:
    void display_result()
    {
        get_marks();
        get_rool_no();
        cout<<"the percentance obtained is : "<<(maths+physics)/2<<"%"<<endl;
    }

};


int main(){
    result anurag;
    anurag.set_rool_no(179);
    anurag.set_marks(99.0,98.5);
    anurag.display_result();
    return 0;
}