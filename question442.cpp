#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> freq(1000, 0); // assuming numbers are <= 1000
    vector<int> ans;

    for (int x : arr) {
        freq[x]++;
        if (freq[x] == 2) {
            ans.push_back(x);
        }
    }

    cout << "Duplicate elements are: ";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
