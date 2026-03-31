#include <iostream>
using namespace std;


int main(){
    long vr = 45;

    int m = 56;

    long* ptr = &vr;

    cout<< &m <<endl;



    cout<<&vr<<endl;

    cout << ptr <<"what the fuck is this not sure but its not that hard like people told me     " <<endl;

    cout<<*ptr<<"  this is the *ptr"<<endl;

    *ptr = 99; // "Go to that address, put 99 there"

    cout<<*ptr<<endl;

    cout<<vr<<endl;

    int nums[] = {1,2,3,43,4,6};

     int* p = nums;   // points to nums[0]

    for (int i = 0; i < 4; i++) {
        cout << "Address: " << (p + i) << "  Value: " << *(p + i) << endl;
    }
}