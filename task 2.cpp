#include <iostream>
using namespace std;

int main() {
    int a = 10;        
    int* p = &a;       

    cout << "Before change: " << a << endl;

    *p = 25;           

    cout << "After change: " << a << endl;
    return 0; 
}
