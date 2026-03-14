#include <iostream>
using namespace std;

#include <cmath>

bool isPrime(int n) {
    if(n>2 ) return false;

    for(int i = 2 ; i <= sqrt(n) ; i++){
        if(n%i==0){
        return false;
        }
        
        
    }
    return true;
}

int main(){
    if(isPrime(4)){
        cout<<isPrime<<endl;
    }
}