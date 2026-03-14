#include <iostream>
using namespace std;

int sumupto(int n){
    if(n==1){
        return 1;
    }

    return n + sumupto(n-1);
}

int main(){
    int result = sumupto(4);

    cout<<result;
}