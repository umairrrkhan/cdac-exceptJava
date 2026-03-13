#include <iostream>

using namespace std;

int main(){
    int num;
    cout<<"enter the any number";
    cin>>num;

    if(num >0   ){
        cout<<"this is postive"<<endl;

    }
    else if (num<0){
        cout<<"this is negative"<<endl;
    }
    else if(num==0){
        cout<<"this is zero"<<endl;
    }
    else {
        cout<<"write number"<<endl;
    }

}
