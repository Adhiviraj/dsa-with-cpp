#include<iostream>
using namespace std;

int firstOcc(int arr[] , int n , int key){
    int s=0;
    int l=n-1;

    int ans =-1;

    while(s<=l){
        int mid=s+(l-s)/2;

        if(key==arr[mid]){
            ans=mid;
            l=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            l=mid-1;
        }
    }
    return ans;
}

int lastOcc(int arr[],int n,int key){
    int s=0;
    int l=n-1;

    int ans =-1;

    while(s<=l){
        int mid=s+(l-s)/2;
        if(key==arr[mid]){
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            l=mid-1;
        }
    }
    return ans;
} 

int main(){
    int even[17]={1,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,5};
    cout<<"first occurance of 3 is at index- "<<firstOcc(even , 17 , 3)<<endl;
    cout<<"last occurance of 3 is at index- "<<lastOcc(even , 17 , 3)<<endl;
    cout<<"Number of occurance- "<<lastOcc(even , 17 , 3)-firstOcc(even , 17 , 3)+1<<endl;
    return 0;
}