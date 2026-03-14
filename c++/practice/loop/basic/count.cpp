#include <iostream>

using namespace std;

int main(){
    int n = 153;

    int original = n;

    int sum = 0 ;
    


    while(n>0){

    int digit = n % 10 ;
    int cube = digit*digit*digit ;
    sum+=cube;
    n = n/10 ;

    }

    if(sum == original){
        cout<< "yes armstrong";
    }
    else{ cout<<" no";}
}