#include <iostream>

using namespace std;

void countdown(int n ){
    if (n == 0){
        cout<< "what"<<endl;
        return;
    }

    countdown(n-1); // function call itself 
}

int main(){
    countdown(5);
    return 0 ;
}

