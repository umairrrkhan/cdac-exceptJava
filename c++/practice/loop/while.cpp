#include <iostream>
using namespace std;

int main(){
    int n = 1 ;

    while(n<5){
        cout<<n;
        n++;
    }


    for(int i = 1 ; i<5 ; i++){
        cout<<i;
    }

    int m = 1;
    do{
        cout<<m<<" ";
        m++;
    }
    while(m<5);

}