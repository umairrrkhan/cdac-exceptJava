#include <iostream>

#include <vector>

#include <cmath>

using namespace std;

class Shape{

    public :
    virtual double getarea() =0 ;

    virtual ~Shape(){
        cout<<"shape destroyed "<<endl;
    }
};

class Circle : public Shape{


    private :
    double radius ;
    const double PI = 3.14;

    public :

    Circle(double r ) : radius(r){}

    double getarea() override{
        return PI* radius *radius;
    }

    ~Circle(){
        cout<<"destroyed "<<endl;
    }

};

int main(){
    vector<Shape*>shapes;

    shapes.push_back(new Circle(5.0));

    for (Shape* s : shapes) {
        delete s;
    }

    

    return 0;
}