#include <iostream>

using namespace std;

class Shape{

    public :
    virtual void draw(){
        cout<<"draw    k   "<<endl;
    }

    virtual ~Shape() {}

};


class Cirlce : public Shape{

    void draw() override{
        cout<<" this is black cirlce "<<endl;
    }

};

class rectangel : public Shape{
    void draw() override{
        cout<<" this is the rectangle "<<endl;
    }
};

int main(){

    Shape* s1 = new Cirlce();  //if we use new we have to use delete otherwise it will be get memory leak; 
    Shape* s2 = new rectangel();

    s1->draw();
    s2->draw();

    delete s1;
    delete s2;

    return 0 ;
}