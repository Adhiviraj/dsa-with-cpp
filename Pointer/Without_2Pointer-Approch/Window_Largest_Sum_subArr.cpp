#include<iostream>
#include<climits>
using namespace std;

int WindowMaxSum(int Arr[], int s ,int n){
    int sum = 0;
    int MaxSum = INT_MIN;

    for(int i = 0; i <= n - s; i++){
        for(int j = i; j < i + s; j++){
            sum = sum + Arr[j];
        }
        MaxSum = max(MaxSum,sum);
        sum = 0;
    }
    return MaxSum;
}

int main(){
    int n;
    cout<<"Enter the size of Array:- ";
    cin>>n;

    int k;
    cout<<"Enter the size of the window:- ";
    cin>>k;

    int Arr[n];
    cout<<"Enter the element of the Array:- "<<endl;
    for(int i = 0; i < n; i++){
        cin>>Arr[i];
    }
    int MaxSumOfSubArray = WindowMaxSum(Arr,k,n);

    cout<<"The maximum sum of subarray elements of size "<< k <<" :- "<< MaxSumOfSubArray;
}