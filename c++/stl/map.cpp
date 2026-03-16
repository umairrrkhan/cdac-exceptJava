#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string , int > prices;

    prices["apple"] = 120;
    prices["orange"] = 30 ;

    prices["mango"]= 40;

    cout << "Apple price: " << prices["apple"] << endl; 

    for (auto const& [key,val]: prices){ // this is the modern version before that the is like begin() and end ();
       cout<<key <<val;
    }

    return 0 ;
}