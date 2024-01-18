#include<iostream>
using namespace std;
class equivalent
{
    private:
    float a;
    float area;
    float circum;
    public:
    void setA(float length)
    {
        a=length;
        circum=a*3;
        area=(1.73 * a * a) / 4;
    }
    friend void printresult(equivalent);
};
void printresult(equivalent anu)
{
    cout<<"circumference is "<<anu.circum<<endl;
    cout<<"area is "<<anu.area<<endl;
}
int main()
{
    equivalent anu;
    anu.setA(3);
    printresult(anu);


}
