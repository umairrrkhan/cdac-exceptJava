#include <iostream>

using namespace std;

int main(){
    long long fact = 1;

    for (int i = 1 ; i <=20 ; i++){
        fact*=i;
        cout<<fact;
    }
}