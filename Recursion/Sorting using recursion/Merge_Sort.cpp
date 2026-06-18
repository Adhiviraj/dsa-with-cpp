#include<iostream>
using namespace std;

// Function to merge two sorted parts of the array
void merge(int *arr, int s, int e){

    // Find the middle index
    int mid = (s + e) / 2;

    // Length of left subarray
    // Example:
    // s = 0, mid = 2
    // Elements = arr[0], arr[1], arr[2]
    // Length = 3
    int len1 = mid - s + 1;

    // Length of right subarray
    // Example:
    // mid = 2, e = 4
    // Elements = arr[3], arr[4]
    // Length = 2
    int len2 = e - mid;

    // Create temporary arrays
    int *first = new int[len1];
    int *second = new int[len2];

    // -----------------------------
    // Copy left part into first[]
    // -----------------------------
    int mainArrayIndex = s;

    for(int i = 0; i < len1; i++){
        first[i] = arr[mainArrayIndex++];
    }

    // ------------------------------
    // Copy right part into second[]
    // ------------------------------
    mainArrayIndex = mid + 1;

    for(int i = 0; i < len2; i++){
        second[i] = arr[mainArrayIndex++];
    }

    // Indices for traversing temporary arrays
    int index1 = 0;
    int index2 = 0;

    // Start merging from index s
    mainArrayIndex = s;

    // -------------------------------------
    // Merge both sorted temporary arrays
    // -------------------------------------
    while(index1 < len1 && index2 < len2){

        if(first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    // -------------------------------------
    // Copy remaining elements of first[]
    // -------------------------------------
    while(index1 < len1){
        arr[mainArrayIndex++] = first[index1++];
    }

    // --------------------------------------
    // Copy remaining elements of second[]
    // --------------------------------------
    while(index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    }

    // Free dynamically allocated memory
    delete [] first;
    delete [] second;
}

// Merge Sort Function
void mergeSort(int *arr, int s, int e){

    // Base Case:
    // If only one element is present,
    // it is already sorted.
    if(s >= e){
        return;
    }

    // Find middle index
    int mid = (s + e) / 2;

    // Sort left half
    mergeSort(arr, s, mid);

    // Sort right half
    mergeSort(arr, mid + 1, e);

    // Merge both sorted halves
    merge(arr, s, e);
}

int main(){

    int arr[5] = {2, 5, 1, 6, 9};
    int n = 5;

    cout << "Before Sorting: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    mergeSort(arr, 0, n - 1);

    cout << "After Sorting: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}