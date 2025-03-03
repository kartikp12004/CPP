#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n]; // Array of size n
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Taking input
    }

    int sum = arr[0] + arr[n - 1]; // First + Last element
    cout << "Sum of first and last element: " << sum << endl;

    return 0;
}
