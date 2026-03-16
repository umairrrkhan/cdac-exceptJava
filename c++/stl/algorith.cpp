#include <iostream>
#include <algorithm>

#include <vector>

using namespace std;

int main(){
    vector<int> numbers = {5, 2, 9, 1, 7, 2, 8};
    
    cout<<*max_element(numbers.begin(), numbers.end());

    cout<<*min_element(numbers.begin(), numbers.end());

    sort(numbers.begin(), numbers.end());

    reverse(numbers.begin(), numbers.end());

    int countOf2 = count(numbers.begin(), numbers.end(), 2);
    cout << "2 appears " << countOf2 << " times" << endl; 

    auto it = find(numbers.begin()  , numbers.end() , 2);
    if(it != numbers.end()){
        cout<<"this is the number find out ";
    }
}