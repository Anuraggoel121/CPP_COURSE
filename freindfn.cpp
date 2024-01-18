#include <iostream>
using namespace std;
class equivalenttraingle
{
private:
    float a;
    float circum, area;

public:
    // friend equivalenttraingle(et);
    void setA(float length)
    {
        a = length;
        circum = a * 3;
        area = (1.73 * a * a) / 4;
    }
    friend void printresult(equivalenttraingle);
};
void printresult(equivalenttraingle anu)
{
    cout << "circum= " << anu.circum << endl;
    cout << "area = " << anu.area << endl;
}

int main()
{
    equivalenttraingle anu;
    anu.setA(3);
    printresult(anu);

    return 0;
}