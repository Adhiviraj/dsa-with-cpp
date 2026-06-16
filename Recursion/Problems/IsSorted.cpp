#include<iostream>
using namespace std;

// bool isSorted(int arr[],int a,int n){
//     if(a == n){
//         return true;
//     }
//     if(arr[a] < arr[a -1]){
//         return false;
//     }
//     a++;
//     isSorted(arr,a,n);
// }

bool isSorted(int arr[],int n){
    // base case
    if(n == 0 || n == 1){
        return true;
    }

    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool remainingPart = isSorted(arr + 1, n - 1);
        return remainingPart;
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
    int a = 1;
    
    bool  ans = isSorted(arr,n);
    cout << ans << endl;
}