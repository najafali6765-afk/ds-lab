

#include <iostream>
using namespace std;

int main() {
    int* p = new int(100);  
    cout << "Value = " << *p << endl;

    delete p;   
    p = nullptr; 

    if (p == nullptr) {
        cout << "Pointer is now nullptr (safe)." << endl;
    }

    return 0;
}