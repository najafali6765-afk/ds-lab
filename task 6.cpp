
#include <iostream>
using namespace std;

int main() {
    
    int* bad = new int(10);
    cout << "Bad pointer value = " << *bad << endl;
    
    
    int* good = new int(20);
    
    cout << "Good pointer value = " << *good << endl;
    
    delete good;   

    return 0;
}