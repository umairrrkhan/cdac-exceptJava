#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter any number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "This is an even number" << endl;
    } 
    else {
        cout << "This is an odd number" << endl;
    }

    return 0;
}