#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count ;   // we us estatic means by default it start from 0

public:
    void setdata(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }
     void getdata(void)   //getdata (cout the id )
     {
        //  cout << "the id of employee is " << id << " and employee no. is " << count << endl;
         cout<<"the value of count is "<<count<<endl;
     }
    //  static void getcount(void)
    //  {
    //    // cout << id;
    //     cout << "the value of count is " << count << endl;
    // }

};
int employee::count ;

int main()
{
    employee harry , aman, vasu;
    //harry.id (cannot dothat as id is private)
    harry.setdata();
    harry.getdata();
   // employee::getcount();
    aman.setdata();
    aman.getdata();
   // employee::getcount();
    vasu.setdata();
    vasu.getdata();
   // employee::getcount();
    return 0;

    return 0;
}