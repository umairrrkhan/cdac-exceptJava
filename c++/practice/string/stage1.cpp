#include <iostream>
#include <string>
using namespace std;


void favcolor(){
    cout<<"enter ur fav color";
    string color ;
    cin>>color;
    cout<<color<<endl;
}

void printname(){
    string name = "umair khan how u doing bro ";

    cout<<name<<endl;
}

void userinput(){
    string fullname ;

    cin.ignore();   // clears leftover newline
    
    getline(cin , fullname);
    cout<<fullname;
}

int main(){
    favcolor();
    printname();
    userinput();
}