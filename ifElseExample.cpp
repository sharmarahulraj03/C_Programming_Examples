#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age";
    cin >> age;

    if (age > 18) {
        cout <<"Eligible to vote";
    }
    else if(age < 18)
    {
        cout <<"Not Eligible to vote";
    }
    else
    {
        cout << "All other condition";
    }
    return 0;
}