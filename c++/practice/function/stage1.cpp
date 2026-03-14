#include <iostream>
using namespace std;

void sayhello(){
    cout<<"this is crazy"<<endl;
}

int printDouble(int  n ){
    int result = n*2;
    cout << "The double of " << n << " is " << result << endl;
}

int main(){
    sayhello();
    sayhello();
    sayhello();
    printDouble(3);
}