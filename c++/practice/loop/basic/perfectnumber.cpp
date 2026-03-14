#include <iostream>
using namespace std;

int main(){
    int num = 6;
    int original = num ;

    int sum = 0;

    for (int i = 1 ; i<=num-1 ; i++){

        if(num%i == 0 ){
            sum+=i;
        }

    }

    if(sum== original){
        cout<<"this is perfect number";
    }
    else{cout<<"this is not ";}
}