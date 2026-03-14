#include <iostream>
#include <cmath>

using namespace std;

int main(){
    for(int num = 2 ; num<=100 ; num++){{
        bool isPrime = true;

        for(int i = 2; i <=sqrt(num) ; i++){ // for confusion Mathematically, if a number N has a factor larger than its square root, it must also have a factor smaller than the square root.
// Example: For 100, 100 =10 100 =10. We only need to check up to 10. If 100 isn't divisible by 2, 3, ... 10, it won't be divisible by 11, 12, etc. This makes your program much faster.
            if(num%i == 0){
                isPrime = false ;
                break;
            }
        }

         if (isPrime) {
            cout << num << " ";
        }
    }}
}

// what i understand here which i didnt understand earlier that first loop number is run fully like 1 will run to the 10 times for the second loop then when it complete then it will choose 2 and follow the same process