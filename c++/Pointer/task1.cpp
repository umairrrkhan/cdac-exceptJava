#include <iostream>

using namespace std;

int main(){
    int a = 10 ;
    int b = 20 ;
    int c = 30 ;

    int* ptr1 = &a;
    int* ptr2 = &b;
    int* ptr3 = &c;

    cout<<"value of a "<<a <<endl;

    cout<<" address of a "<<&a <<endl;

    cout<<"value ptr1 is same of a "<<*ptr1<<endl;

    *ptr1 = 45;
    

    cout<<a<<endl;
}