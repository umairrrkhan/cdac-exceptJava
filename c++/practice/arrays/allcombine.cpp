#include <iostream>
using namespace std;

void printarray(int arr[] , int size){

    for (int i = 0 ; i< size ; i++){
        cout<<arr[i]<<" ";
    }

}

int findmax(int arr[] , int size){
      int max = arr[0];
      for (int i = 0 ; i<size ; i++){
        if(arr[i]>max){
            max = arr[i];
        }
      }

      return max;
}

int findmin(int arr[] , int size){
      int min = arr[0];
      for (int i = 0 ; i<size ; i++){
        if(arr[i]<min){
            min= arr[i];
        }
      }

      return min;
}

int findsum(int arr[] , int size){
    int sum = 0 ;
    for (int i = 0 ; i < size ; i++){
        sum += arr[i];
    }
    return sum ;
}



int main(){
    int number[5];

    for (int i = 0 ; i< 5 ; i++){
        cin>>number[i];
    }
    
    printarray(number , 5);

    int resultmax = findmax(number , 5) ;
    int resultmin = findmin (number , 5);

    int resultsum = findsum(number , 5);

    cout<<resultmax<<endl;
    cout<<resultmin<<endl;
    cout<<resultsum<<endl;
    
    


}