#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the size of array1: ";
    cin >> n;

    vector<int> arr1(n);
    cout << "Enter elements of array1: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the size of array2: ";
    cin >> m;
    vector<int> arr2(m);
    cout << "Enter elements of array2: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    vector<int> ans; // store common elements

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr1[i] == arr2[j]) {
                ans.push_back(arr1[i]);
                arr2[j] = -1e9; // mark as used so duplicates don’t repeat
                break;
            }
        }
    }

    cout << "Common elements are: ";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
