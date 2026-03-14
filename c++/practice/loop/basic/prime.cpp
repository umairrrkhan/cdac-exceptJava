#include <iostream>
#include <cmath>
using namespace std;

int main(){
     bool isPrime = true;
     int num;
     cout<<"enter the prime number : ";
     cin >>num;

     if(num < 2){ cout<<isPrime;}

     for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            isPrime = false; 
            break;           
        }
        
    }

    if (isPrime) {
        cout << num << " IS a prime number." << endl;
    } else {
        cout << num << " is NOT a prime number." << endl;
    }

    return 0;
}