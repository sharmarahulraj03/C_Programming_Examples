#include <iostream>
using namespace std; 

int main() {
    int a; 
    for(a= 1; a < 101; a++) {
        if (a % 2 != 0) {
            cout << "Odd number :" << a << endl;
        }
    }
    return 0;
}