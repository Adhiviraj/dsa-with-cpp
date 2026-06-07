#include<iostream>
using namespace std;

int sizelgt(int arr[],int sum1,int n){

}

int main(){
    int a;
    cout<<"Enter the size of Array:- ";
    cin>>a;
    
    int sum;
    cout<<"Enter value of sum is less then in subarray:- ";
    cin>>sum;

    int Arr[a];

    for(int i = 0; i < a; i++){
        cin>>Arr[i];
    }
    int longestsubstrLen = sizelgt(Arr,sum,a);

    cout<<"The Longest subarray is :- "<<longestsubstrLen;
}