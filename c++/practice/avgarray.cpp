#include <iostream>

using namespace std;

int sum(int marks[] , int size){

    int summarks = 0;

    for (int i = 0 ; i< size ; i++){
        summarks += marks[i];
    }

    return summarks;

}

int count(int size){

    return size;
}

void avg(int marks[] , int size){
    int h = sum(marks, size );

    int c = count(size);
    int avg = h/c;

    cout<<avg<<endl;
}


int main(){
    int marks [5];

    int size = 5;

    for (int i = 0 ; i<size ; i++){
        cin>>marks[i];
    }

    int total = sum(marks, size);
    cout << "Sum: " << total << endl;
    
    sum(marks, size);

    avg(marks , size);


}