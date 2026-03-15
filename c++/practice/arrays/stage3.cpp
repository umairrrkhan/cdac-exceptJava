#include <iostream>

using namespace std;

void printarray(int arr[] , int size){
    for (int i = 0 ; i<size ; i++){
        cout<<arr[i]<<" ";

    }

    cout<<endl;
}

void doublevalue(int arr[] , int size){
    for(int i = 0 ; i <size ; i++){
        arr[i] = arr[i] * 2;
    }

}

int findmax(int arr[] , int size){
    int max = arr[0];

    for (int i = 0 ; i<size ; i++){
        if (arr[i]> max){ 
            max = arr[i];
        }

    }
    return max;
}

int main(){
    int number[5] = {1,2,3,4,5};

    printarray(number , 5);
    doublevalue(number , 5);
    printarray(number,5);

    findmax(number,5);

    int result = findmax(number,5);
    cout<<result;
}