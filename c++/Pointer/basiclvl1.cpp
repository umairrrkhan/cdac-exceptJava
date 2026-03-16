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

    cout<<" new age "<<age <<endl; // here its very simple fist of all *ptr use to get value right and also can be change and & use to get address okay right .
    

}