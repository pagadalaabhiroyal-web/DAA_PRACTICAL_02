#include <iostream>
using namespace std;

// Function to perform linear search
int linearSearch(int arr[], int size, int target) {
    // Loop through every element in the array
    for (int i = 0; i < size; i++) {
        // If target element is found, return its index
        if (arr[i] == target) {
            return i; 
        }
    }
    // Return -1 if the target is not in the array
    return -1; 
}

int main() {
    int arr[] = {12, 45, 7, 23, 9, 56, 1};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate array length
    int target = 23; // Element to find

    int result = linearSearch(arr, size, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
