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

    bool isspeed(){
        if(speed <= 70 ) {
            return true;
        }

        else{
            return false;
        }
    }

    
};

int main(){
        Car car1;
        Car car2;

        car1.setinfo("umair",123);
        car2.setinfo("moni",789);

        car1.display();
        car2.display();
        cout << "Car1 speed OK? " << car1.isspeed() << endl;  // prints 0 (false)
        cout << "Car2 speed OK? " << car2.isspeed() << endl;  // prints 1 (true)
    }