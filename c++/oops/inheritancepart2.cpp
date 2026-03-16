#include <iostream>

#include <string>

using namespace std;

class Person{
    protected :
    string name;
    int age;

    public : 
    Person(string n , int a ){
        name = n;
        age = a;
    }

    void displayperson(){
        cout<<name <<age<<endl;
    }
};

class Student : public Person{
    private :
    float gpa;

    public :
    Student(string n , int a , float g ): Person(n,a){
        gpa = g;
    }

    void displayStudent(){
        displayperson();
        cout<<gpa<<endl;
    }

    bool ishonor(){
        return gpa>= 3.5;
    }
};

int main(){
    Student s1("lord ", 25, 3.8);
        s1.displayStudent();
        
    
}