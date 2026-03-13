#include <iostream>

using namespace std;

int main(){
    if(20 >18   ) {
        cout << "20 is greater then 18  "<<endl;
    }

    int x  = 18 , y = 16;
    if(x>y){
        cout<< "x is greater then y ";
    }

    bool isGreater = x >y;
    if(isGreater){
        cout << "x is greater then y";
    }
}

// The else part is optional. You can stop at else if and the compiler won’t complain.
// java do the same too 