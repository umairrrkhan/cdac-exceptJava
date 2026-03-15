#include <iostream>

#include <string>

using namespace std;


int countvowels(string s){
    int vowelscount = 0 ;
    int constcount  = 0 ;

    for (int i = 0 ; i<s.length(); i++){

        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
    vowelscount++;
       }
        
    }

    return vowelscount;
}

int countconst(string s){
    int constcount  = 0 ;

    for (int i = 0 ; i<s.length(); i++){

        if (s[i] != 'a' || s[i] != 'e' || s[i] != 'i' || s[i] != 'o' || s[i] != 'u') {
    constcount++;
       }
        
    }

    return constcount;
}

void printdispaly(string s){
    cout<<s<<endl;

}

int main(){
    string name;
    cout<<"enter a string " <<endl;

    cin>>name;

    printdispaly(name);

    int result = countvowels(name);

    cout<<result<<endl;

    int result1 = countconst(name);

    cout<<result1<<endl;


}