#include<iostream>
using namespace std;

int getSum(int *arr,int n){
    int sum = 0;

    for(int i = 0; i < n ; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){

    int n;
    cin>>n;

// Variable size Array
    int * arr = new int[n];

// Taking inputs in Array 
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int sum = getSum(arr, n);
    
    cout << "Sum of dynamic Array :- " << sum << endl;
    return 0;
}