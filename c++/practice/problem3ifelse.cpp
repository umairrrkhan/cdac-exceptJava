#include <iostream>
using namespace std;

int main(){
    int num1;
    cout << "Enter the first number" << endl;
    cin >> num1;

    int num2;
    cout << "Enter the second number" << endl;
    cin >> num2;

    if(num1 > num2){
        cout << "num1 is greater than num2";
    }
    else if(num2 > num1){
        cout << "num2 is greater than num1";
    }

    return 0;
}