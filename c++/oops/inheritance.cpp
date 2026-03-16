#include <iostream>

using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"eating "<<endl;
    }
};

class Dog: public Animal{

    public :
    void bark(){
        cout<<"bhav bhav bhav"<<endl;
    }
};

int main(){
    Dog mydog;
    mydog.eat();
    mydog.bark();
}