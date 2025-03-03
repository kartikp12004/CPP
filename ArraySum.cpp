#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]); // Finding array size

    int sum = arr[0] + arr[size - 1]; // First + Last element
    cout << "Sum of first and last element: " << sum << endl;

    return 0;
}
