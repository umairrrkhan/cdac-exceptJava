#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int>home ;

    home.insert(1);
    home.insert(1);
    home.insert(1);

    cout<<home.size();
}