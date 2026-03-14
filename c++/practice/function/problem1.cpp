#include <iostream>

using namespace std ;

void  evenodd(int a ){
    if (a%2 == 0){ cout<<"this is even ";}
    else { cout<<"this is odd";}
}

int main(){
    evenodd(4);
    evenodd(7);
    evenodd(10);
    return 0;
}