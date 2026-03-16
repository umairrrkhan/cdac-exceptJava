#include <iostream>

//pointer and array 

using namespace std;

int main(){
    int size;
    cout<<" enter number ";
    cin>>size;

    int* number = new int[size];

    for (int i = 0 ; i< size ; i++){
        cin>>  *(number + i);
    }

    cout<<endl;


    for (int i = 0 ; i< size ; i++){
        cout<<*(number + i );
    }

      delete[] number;  
    number = nullptr;
}