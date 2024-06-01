#include <iostream>
#include <climits> // Include this header to use INT_MAX and INT_MIN
using namespace std;

int getmin(int num[], int n) {
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (num[i] < min) { // Corrected condition to find the minimum value
            min = num[i];
        }
    }
    
    return min;
}

int getmax(int num[], int n) {
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (num[i] > max) {
            max = num[i];
        }
    }
    
    return max;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    if (size <= 0 || size > 100) { // Add validation for size input
        cout << "Invalid size. Please enter a number between 1 and 100." << endl;
        return 1;
    }

    int num[100];
    
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }

    cout << "Maximum value is: " << getmax(num, size) << endl;
    cout << "Minimum value is: " << getmin(num, size) << endl;
    
    return 0;
}
