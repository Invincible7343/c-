//  we want to print prime number 

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for (int num = 2; num <= n; num++) {
        bool isPrime = true;

        // Check if num is prime
        for (int i = 2; i <= num/2 ; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }


        if (isPrime) {
            cout << num << " ";
        }
    }
    
    cout << endl; 
    return 0;
}
