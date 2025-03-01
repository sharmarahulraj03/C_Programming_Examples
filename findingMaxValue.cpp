#include <iostream>
using namespace std; 

int main() {
    int num1 = 10, num2 = 15, num3 = 20; 

    if ( num1 > num2 && num1 > num3)
    {
        cout << " largest number is :" << num1;
    }
    else if( num2 > num1 && num2 > num3)
    {
        cout << " largest number is :" << num2;
    }else 
    {
        cout << " largest number is :" << num3;
    }



}