#include <iostream>

using namespace std;


string reverse(string city[] , int size){
    for (int i =  size - 1  ; i >=0 ; i--){
        cout<<city[i]<<" ";
    }

    cout<<endl;
}

int main(){
    string city[5];

    int size = 5;

    for (int i = 0 ; i< 5 ; i++){
        cin>>city[i];
    }

    reverse(city , size);

    return 0 ;
}