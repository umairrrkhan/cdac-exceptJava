#include <iostream>
#include <string>

using namespace std;


int main(){

    string name = "hey what u  doing in this space        can we have some fun ";
    cout<<name.length()<<endl;
    cout<<name.size()<<endl;

    string newText = name + "can we see ";
    cout<<newText<<endl;

    cout<<name.substr(1,7)<<endl;
    cout<<name.find("what")<<endl;
    cout<<name.append("crazy")<<endl;
    cout<<name<<endl;

    int firsspace = name.find(" ");

    cout<<name.substr(0,firsspace)<<endl;

    int lastspace = name.rfind(" ");

    cout<<name.substr(lastspace+1)<<endl;
}