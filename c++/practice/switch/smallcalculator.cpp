#include <iostream>
using namespace std;

int main(){
    int a ;
    cout<<"enter the number ";
    cin >> a;
    int b ;
    cout<<"enter the num 2";
    cin >>b;
    
    char result;
    cout << "Enter operator (+ or -): ";
    cin>>result;

    int op;

    switch(result){
        case '+':
        op = a+b;
        cout<<op;
        break;
        case '-':
        op = a-b;
        cout<<result;
        break;
        default :{
                 cout<<"try again";
        }
    }
}