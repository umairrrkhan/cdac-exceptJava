#include <iostream>

using namespace std;

int factorial(int n ){
    if (n == 1 || n ==0){ // If you forget the base case, your program will crash!
        return 1; 
    }

    return n * factorial(n-1); // // RECURSIVE CASE call itself 
}

int main(){
    int result = factorial(5);
    cout<<result;
    return 0;
}