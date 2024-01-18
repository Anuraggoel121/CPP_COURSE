#include<iostream>
using namespace std;
template<class t1, class t2>
class anurag
{
    public:
    t1 data;
    t2 item;
    anurag(t1 anu, t2 rag)
    {
        data=anu;
        item=rag;
    }
    void display()
    {
        cout<<data<<endl<<item<<endl;
    }
};
int main()
{
    //anurag<int , char> obj(1,'c');
   // anurag<int , float> obj(1,2.2);
    anurag<char , char>obj('a','c');
    obj.display();
}











// #include<iostream>
// using namespace std;
// template<class t1,class t2>
// class anurag
// {
//     private:
//     t1 a;
//     t2 b;
//     public:
//     anu(t1 anu , t2 rag)
//     {
//         a=anu;
//         b=rag;
//     }
//     void display()
//     {
//         cout<<a+b<<endl;
//     }
// };
// int main()
// {
//     anurag<char,char> obj('anu','rag');
//     obj.display;
// }