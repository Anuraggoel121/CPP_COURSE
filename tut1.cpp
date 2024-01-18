
// // --------------------------------
// #include<iostream>

// int main(){
//    std::cout<<"hello word";
//    return 0;
// }

// // ---------------------------------

// #include<iostream>

// int main(){
//    std::cout<<"hello word";
//    return 0;
// }

// // ----------------------------------

#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main() {
    try {
        ifstream file("nonexistent_file.txt");
        if (!file.is_open()) {
            string err = "File not found!";
            throw err;
        }
        file.close();
    } 
catch (string err) {
        cout << "Exception caught: " << err << endl;
    }
    return 0;}
