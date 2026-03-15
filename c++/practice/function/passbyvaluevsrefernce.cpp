#include <iostream>

using namespace std;

void swapByvalue(int a , int b ){
    int temp = a;
    a = b ;
    b = temp;
    cout<<" inside function a : "<<a << " b =  "<<b<<endl;
}

void swapbyrefernce(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 5 , y = 10;

    swapByvalue(x,y);
    cout << "After value swap: x=" << x << ", y=" << y << endl;

    swapbyrefernce(x, y);
    cout << "After reference swap: x=" << x << ", y=" << y << endl;
}