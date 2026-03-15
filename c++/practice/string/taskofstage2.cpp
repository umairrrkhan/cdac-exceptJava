#include <iostream>

#include <string>

using namespace std;


int countvowels(string s){
    int count = 0 ;

    for (int i = 0 ; i<s.length(); i++){

        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
    count++;
}
        
    }

    return count;
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


}