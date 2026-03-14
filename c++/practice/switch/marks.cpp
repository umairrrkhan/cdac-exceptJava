#include <iostream>
using namespace std;

int main(){

    int marks;
    cout<<"enter marks";
    cin>>marks;

    switch(marks/10){
        case 10:
        case 9: cout<<"grade a  "; break;
        case 8: cout<<"grade b "; break;
        case 7 : cout <<"grade c"; break;
        case 6: cout << "grade d"; break;
        case 5: cout<<"grade e"; break;
        case 3:
        case 4:
        case 2:
        case 1:
        case 0: cout<<"grade f"; break;
        default: cout<<"end ";
    }

}