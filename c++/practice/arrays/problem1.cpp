#include <iostream>

using namespace std;

int modiarray(){
    int number[7] = {1,2,3,4,5,6,7};

    cout<<number[0]<< " " <<number[4]<< " "<<number[6]<< " "<<endl;

    number[2] = 23;

    return number[2];
}

int main(){
    int result = modiarray();
    cout<<result<<endl;
}