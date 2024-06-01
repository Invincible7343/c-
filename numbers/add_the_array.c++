#include <iostream>
using namespace std;

int main() {
    int a[] = {5, 6, 7, 8, 3};
    int b = 0;

    int length = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < length; i++) {
        b += a[i]; 
    }

    cout << "The sum of the array is: " << b << endl;
    return 0;
}
