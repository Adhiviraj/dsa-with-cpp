#include<iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int key){
    //base case
    if(s > e){
        return false;
    }
    
    int mid = (s + e)/2;
    if(arr[mid] == key){
        return true;
    }
    if (arr[mid] < key){
        return binarySearch(arr , mid + 1, e, key);
    }else{
        return binarySearch(arr,s, mid -1, key);
    }
}

int main(){
    int n;
    cout << "Enter the size of array :- ";
    cin >> n;

    int arr[100];

    cout << "Enter the element of array in orders :- ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int i = 0;
    int key;
    cout << "Enter the key :- ";
    cin >> key;

    // int index = findIndex(arr, n, key,i);
    // cout << index;
    bool ans = binarySearch(arr,0,n-1,key);
    cout << ans << endl;
}    

