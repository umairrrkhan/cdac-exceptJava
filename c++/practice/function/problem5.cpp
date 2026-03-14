#include <iostream>
using namespace std;

void IsPerfect(int num){
    int sum = 0;
    for (int i = 1 ; i<=num-1 ; i++ ){

        if(num%i==0){
            sum+=i;
        }
    }

    if(sum%num==0){
        cout<<num<<" this is the perfect number";

    }
}

int main(){
    IsPerfect(6 );
}