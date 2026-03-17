// A shopkeeper wants to store prices of 10 items and display the highest and lowest price;

#include <iostream>

#include <algorithm>


using namespace std;

int main(){
    int store [10];

    for (int i = 0 ; i< 10 ; i++){
        cin>>store[i];

    }

    for(int i = 0 ; i< 10 ; i++){
        cout<<store[i];
    }

    cout << "Highest: " << *max_element(store, store + 10) << endl;
    cout << "Lowest: "  << *min_element(store, store + 10) << endl;


}