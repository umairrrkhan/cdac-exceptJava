#include <iostream>

using namespace std;

int evencount(int num [] , int count){
    int even = 0;

    for (int i = 0 ; i<count ; i ++){
        if (num[i] % 2 == 0)  {
            even ++;
        }
    }

    cout<<even <<endl;

    return even;
}

int oddcount(int num [] , int count ){
    int odd = 0 ;

    for (int i = 0 ; i< 20 ; i++){
        if(num[i] %2!= 0 ){
            odd++;
        }
    }

    cout << odd <<endl;

    return odd;

}


int main(){
    int count = 20 ;

    int num[20];
    for (int i = 0 ; i<20 ; i++){
        cin>>num[i];

    }

    evencount(num , count);

    oddcount(num , count);
}