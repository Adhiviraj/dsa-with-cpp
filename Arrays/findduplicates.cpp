#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++) { 
        ans ^= arr[i];   // XOR all array elements
    }

    for (int i = 1; i < n; i++) {
        ans ^= i;        // XOR with 1 to n-1
    }

    cout << "The duplicate number is: " << ans << endl;
    return 0;
}
