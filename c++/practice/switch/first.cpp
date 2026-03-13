#include <iostream>
using namespace std;

// break prevents fall‑through. Without it, execution continues into the next case

int main(){
    char grade;
    cout<<"write the grade ";
    cin >>grade;
    switch(grade){
        case 'a':
        cout<<"this is the excellent grade"<<endl;
        break;
        case 'b':
        cout<<"this is the avg";
        break;
        default:
        cout<<"keep trying";
    }
}