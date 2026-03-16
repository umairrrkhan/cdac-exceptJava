#include <iostream>

using namespace std;


class Student{
    private :
    string name ;
    float grade;
    int age ;

    public :
    string getName(){
        return name;
    }

    int getage(){
        return age;
    }


    void setage(int a){
        if(a>=0 && a<=150){
            age = a;
        }
        else{
            cout<<"invalid age ! "<<endl;
        }
    }

    void setname (string s){
        name = s ;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

};

int main(){

    Student s1("lord", 25);
    s1.display();


}

