#include <iostream>
#include <vector>
#include <algorithm>  // for max_element
using namespace std;

// Function to check if allocation possible with max pages = mid
bool isPossible(vector<int> &arr, int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > mid) return false;  // single book > mid, not possible
    
        if (pageSum + arr[i] > mid) {
            studentCount++;         // assign next student
            pageSum = arr[i];       // start new allocation
            if (studentCount > m)   // too many students
                return false;
        } else {
            pageSum += arr[i];      // assign book to current student
        }
    }

    return true; // allocated all books within m students
}

int allocateBooks(vector<int> &arr, int n, int m) {
    if (m > n) return -1; // more students than books (impossible)

    int start = *max_element(arr.begin(), arr.end()); // smallest possible max
    int end = 0;
    for (int pages : arr) end += pages; // sum of all pages

    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (isPossible(arr, n, m, mid)) {
            ans = mid;        // possible -> store result
            end = mid - 1;    // try to minimize further
        } else {
            start = mid + 1;  // not possible -> increase limit
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {10, 20, 30, 40};
    int n = arr.size();
    int m = 2;

    int result = allocateBooks(arr, n, m);
    cout << "Minimum possible maximum pages: " << result << endl;
    return 0;
}
 