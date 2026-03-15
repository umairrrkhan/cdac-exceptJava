#include <iostream>

using namespace std;


int modiarray(){

    int number[5] = {1,2,3,4,5};

    cout<<number[0]<<endl;
    cout<<number[1]<<endl;

    number[1] = 27;

    return number[1];

}

int main(){

    int result = modiarray();
    cout<<result<<endl;
    
}