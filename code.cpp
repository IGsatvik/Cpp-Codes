#include <iostream>
using namespace std;

// Function to find the largest element in an array
int findLargest(int arr[], int n) {
    int max = arr[0]; // Assume first element is largest
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if current element is greater
        }
    }
    return max;
}

int main() {
    int arr[] = {12, 45, 23, 67, 34, 89};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = findLargest(arr, n);

    cout << "The largest element is: " << largest << endl;

    return 0;
}
