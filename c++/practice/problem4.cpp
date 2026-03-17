#include <iostream>

using namespace std;

int avg(int score [] , int matches){
    int sum = 0 ; 

    for (int i = 0 ; i< matches ; i ++){
        sum += score[i];
    }

    int avg = sum/matches;

    cout<<avg<<endl ;

    return avg;
}

int main(){
    int score[10];
    int matches = 10;

    for (int i = 0 ; i < matches ; i++){
        cin>>score[i];
    }

    avg(score , matches);
}