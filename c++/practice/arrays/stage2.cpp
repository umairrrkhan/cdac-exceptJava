#include <iostream>
using namespace std;

int main(){
    int number[5];

    int sum = 0;

    for (int i = 0 ; i< 5; i++){
        cin>>number[i];
    }

    for (int j= 0 ; j<5 ; j++){
        cout<<number[j]<<endl;
        sum+=number[j];
        
    }

    cout<<sum;
}