// smart pointer 

#include <iostream>

#include <memory>

using namespace std;

int main(){
    unique_ptr<int>ptr1 = make_unique<int>(10);

    cout<<*ptr1<<endl;

    unique_ptr<int> ptr2 = move(ptr1);

    cout<<*ptr2<<endl;

    if (ptr1 == nullptr) {
        cout << "ptr1 is now empty!" << endl;
    }

    cout << "Value via ptr2: " << *ptr2 << endl;

    shared_ptr<int> ptr11 = make_shared<int>(10);

    shared_ptr<int> ptr21 = ptr11;

    cout << "Use count: " << ptr11.use_count() << endl;
    cout << "Value: " << *ptr11 << endl;  // 10
    cout << "Value: " << *ptr21 << endl;

// unique pinter is very strong .
}

