#include<iostream>
using namespace std;

int getPivot(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int binarySearch(int arr[], int start, int end, int key) {
    int mid = start + (end - start) / 2;

    while(start <= end) {
        if(arr[mid] == key) {
            return mid;
        }
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main(){
    int arr[5] = {5,8,1,2,3};
    int n = 5;
    int key = 2;

    int pivot = getPivot(arr,n);
    int ans = -1;

    if(key >= arr[pivot] && key <= arr[n-1]) {
        ans = binarySearch(arr,pivot,n-1,key);
    }
    else {
        ans = binarySearch(arr,0,pivot-1,key);
    }

    cout << "Index of " << key << " is: " << ans << endl;
    return 0;
}
