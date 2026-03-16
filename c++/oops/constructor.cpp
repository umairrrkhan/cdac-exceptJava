#include <iostream>

using namespace std;

class Car{
    private :
    string brand;
    int speed;

    public :
    Car(string b , int s ){
        brand = b ;
        speed = s;
        cout<<brand <<endl;
    }

    ~Car(){
        cout<<"carazy" <<endl;
    }

    void display(){
        cout<<brand <<speed <<endl;
    }
};

int main(){
    Car car1("TOYOTA", 121);
    Car car2("FERRARI", 34);


    car1.display();
    car2.display();
    

}