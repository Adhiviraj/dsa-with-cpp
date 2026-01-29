#include <iostream>
#include <vector>
#include <algorithm>  // for max_element
using namespace std;

bool ispossible(vector<int>&arr,int n, int m, int mid){
    int painterCount=1;
    int lengthofBoard=0;

    for(int i=0;i<n;i++){
        if(arr[i]>mid) return false;

        if(arr[i]+lengthofBoard>mid){
            painterCount++;
            lengthofBoard=arr[i];
            if(painterCount>m) return false;
        } else{
            lengthofBoard+=arr[i];
        }
    }
    return true;
}

int partitions(vector<int> &arr,int n, int m){
    if(n<m){
        return -1;
    }
    int start=*max_element(arr.begin(),arr.end());
    int end=0;

    for(int length : arr) end+=length;
    int ans =-1;

    while(start<=end){
        int mid= start+(end-start)/2;

        if (ispossible(arr,n,m,mid)){
            ans=mid;
            end=mid-1; 
        } else {
            start=mid+1;
        }
    }

    return ans;

}

int main(){
    vector<int> arr={5,5,5,5};
    int n=arr.size();
    int m=2;

    int result=partitions(arr,n,m);
    cout << "minimum possible time for painting-" << result << endl;
}