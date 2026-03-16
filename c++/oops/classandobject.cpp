#include <iostream>

using namespace std;

class Car{

private:

    string brand ;
    int speed;

public :
    void setinfo(string b , int s ){
        brand = b;
        speed = s;

    }

    void display(){
        cout<<brand <<" "<<speed <<endl;
    }

    
};

int main(){
        Car car1;
        Car car2;

        car1.setinfo("umair",123);
        car2.setinfo("moni",789);

        car1.display();
        car2.display();
    }