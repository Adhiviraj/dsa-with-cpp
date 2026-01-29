#include<iostream>
using namespace std;

int peakmountain(int arr[], int size) {
    int first = 0;
    int last = size - 1;

    while (first < last) {
        int mid = first + (last - first) / 2;

        if (arr[mid] < arr[mid + 1]) {
            first = mid + 1;   // ✅ move right
        }
        else {
            last = mid;        // ✅ move left
        }
    }
    return first;   // ✅ peak index
}

int main() {
    int even[6] = {0, 2, 4, 6, 3, 1};
    cout << "Peak index is - " << peakmountain(even, 6) << endl;
    cout << "Peak element is - " << even[peakmountain(even, 6)] << endl;
    return 0;
}
