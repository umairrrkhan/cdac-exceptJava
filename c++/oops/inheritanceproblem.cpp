#include <iostream>
using namespace std;
#include <string>

class Vehicle{
    protected:
    string brand;
    int year;

    public :

    Vehicle(string b , int y){
        brand  = b;
        year = y;
    }

    void displayvehicle(){
        cout<<"brand :"<<brand<<" year : "<<year <<endl;
    }
};

class Car : public Vehicle{
    private:
    int doors;

    public :
     
    Car(string b , int y , int d): Vehicle(b , y){
        doors = d;
    }

    void displayCar(){
        displayvehicle();
        cout << "doors: " << doors << endl;
    }
    

};

class Motorcycle :  public Vehicle{
    private :
    bool hasSidecar;

    public :
    Motorcycle(string b , int y  , bool h): Vehicle( b , y ){

        hasSidecar  = h ;

    }
    bool getHasSidecar() {
        return hasSidecar;
    }

};

int main(){
    Car car1("toyota ",2023 , 4);
    car1.displayCar();

    Motorcycle moto1("honda",2024,true);
    if (moto1.getHasSidecar()) {
        cout << "has sidecar" << endl;
    } else {
        cout << "no sidecar" << endl;
    }

    return 0 ;
}