#include <iostream>
using namespace std;

int add(int a , int b ){
    int sum = a+b ;
    return sum;

}

int multi(int a , int b ){
    int sum = a*b;
    return sum;
}

int main(){
    int result = add(4,5);
    int home = multi(4,7);
    cout<<result<<endl;
    cout<<home;
}
