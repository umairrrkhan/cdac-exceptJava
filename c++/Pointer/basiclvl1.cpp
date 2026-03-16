#include <iostream>

using namespace std;

int main(){
    int age = 25 ;

    int* ptr = &age;

    cout<<"value of age : "<<age <<endl;

    cout<<"address of age "<<&age <<endl;
    cout<<"value of ptr"<<ptr <<endl;

    cout<<"value at ptr "<<*ptr<<endl;

    *ptr = 30 ;

    cout<<" new age "<<age <<endl;

}