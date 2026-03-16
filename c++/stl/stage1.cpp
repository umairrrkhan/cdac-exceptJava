#include <iostream>

#include <vector>

using namespace std;

int main(){
       vector<int>number;

       number.push_back(10);
       number.push_back(11);
       number.push_back(12);

       for(int i : number){
        cout<<i<<" ";
       }


       cout<<number[0]<<endl;
       cout<<number[1]<<endl;

       cout<<number.size();
}