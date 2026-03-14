#include <iostream>

using namespace std;

int main(){
    int num;
    cout<<"eneter the number "<<endl;
    cin>>num;

    int orginal = num ;
    int reversed = 0 ;

    while (num>0){
        int digit  = num %10;
        reversed  = reversed * 10 +digit;
        num = num/10;
    }

    cout<<reversed << "this is reversed "<<endl;

    if(reversed == orginal){

        cout<<"yes"<<endl;
    }
    else{  cout<<"no "; }

}