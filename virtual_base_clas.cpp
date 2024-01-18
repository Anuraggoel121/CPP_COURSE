#include<iostream>
using namespace std;
class student
{
    protected:
    int roolno;
    public:
    void set_num(int a)
    {
        roolno=a;
    }
    void print_num(void)
    {
        cout<<"your rool no. is "<<roolno<<endl;
    }
};
class test : virtual public student
{
    protected:
    float maths,physics;
    public:
    void set_marks(int b,int c)
    {
        maths=b;
        physics=c;
    }
    void print_marks(void)
    {
        cout<<"marks obtaines in maths "<<maths<<endl
            <<"marks obtained in physics "<<physics<<endl;
  }
};

class sports : virtual public student
{
    protected:
    float score;
    public:
    void set_score(float volley)
    {
        score=volley;
    }
    void print_score(void)
    {
        cout<<"your score is "<<score<<endl;

    }
};

class result : public test,public sports
{
    protected:
    float total;
    public:
    void display(void)
    {
        total=maths+physics+score;
        print_num();
        print_marks();
        print_score();
        cout<<"total score obtained by you is "<<total<<endl;
    }
};

int main(){
    result harry;
    harry.set_num(2210);
    harry.set_marks(99.0,89.6);
    harry.set_score(87);
    harry.display();
    return 0;
}