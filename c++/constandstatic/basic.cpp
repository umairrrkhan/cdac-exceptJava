#include <iostream>
#include <string>
using namespace std;

// It means "this cannot change". It's a promise to the compiler and other developers.

class Person {
private:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    void print () const {
        cout<<name<<age<<endl;
    }


};

int main(){
    const Person p("lord", 25); 
    
    p.print();
}