#include <iostream>
using namespace std;

int findUnique(int arr[], int n) {
    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans ^= arr[i];  // XOR each element
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Unique element is: " << findUnique(arr, n) << endl;
    return 0;
}
