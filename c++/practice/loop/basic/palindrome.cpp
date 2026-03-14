#include <iostream>
using namespace std;

int main(){
    int reversed = 0 ;
    int num = 1201;
    int original = num ;

    while (num>0){
        int digit = num %10 ;
        reversed = reversed*10+digit;
        num = num/10;
    }

    if (reversed== original){
        cout<<"this is palindrome";
    }
    else{
        cout<<"this is nto";
    }
}