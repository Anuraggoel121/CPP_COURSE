#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    vector<int> anu;
    int element, size;
    cout << "Enetr size of vector : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "element : ";
        cin >> element;
        // anu.push_back(6);  ####what happen dont know###
        anu.push_back(element); // add element in back
    }
    // anu.pop_back(); //delete element form back.
    // anu.pop_back();
    // INSERTION IN VECTOR
    vector<int>::iterator place = anu.begin(); // syntax -- here insertion in vector take place at starting.
    // vector<int> :: iterator place = anu.end();   //syntax -- here insertion in vector take place at end.
    anu.insert(place, 55); // insert 55 in -- vector anu--
    // anu.insert(place+1,7,55); //insert --55 in second place 7times.
    display(anu);
}