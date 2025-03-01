#include <iostream>
using namespace std; 

int main() {
    int i = 1; 

    while(i < 101) {        //Entry control loop
        if (i % 2 == 0) {
            cout << "Even number :" << i << endl;
        }
        i++; 
    }
    
    return 0;
}