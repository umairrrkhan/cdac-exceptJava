#include <iostream>

using namespace std;

int main(){
    int age = 25;

    int& ref  = age;
    ref = 35;

    cout<<age <<endl;
    cout<<ref<<endl;
}

// three meathod in refreces pass by value , pointer and refrecens .