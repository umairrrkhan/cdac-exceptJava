#include <iostream>
using namespace std;

int add(int a , int b );

int main(){
    int result = add(3,5);

    cout<<result;

}

int add(int a , int b ){
    return a+b;
}