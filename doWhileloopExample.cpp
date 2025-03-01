#include <iostream>
using namespace std; 

int main() {
    int i = 1; 

    do {
        if ( i % 2 == 0) {
            cout << "Even Number :" << i <<endl;
        }
        i++;
    } while(i < 101);
    return 0;
}
