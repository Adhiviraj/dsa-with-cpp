#include<iostream>
#include<vector>
using namespace std;

   vector<int> selectionSorting(vector<int> arr,int n){
    
    for(int i=0;i<n-1;i++){
        int minIndex = i;

        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            } 
        }
        swap(arr[minIndex],arr[i]);
    }

    return arr;

}

int main(){
    
    vector<int> arr={5,13,6,1,2,2};
    int n=arr.size();
    vector<int> SortedArr = selectionSorting(arr,n);
    cout<<"{";
    for(int i=0; i<n;i++){
        cout<<SortedArr[i];
        if(i!=n-1) cout<<",";
    }
    cout<<"}"<<endl;

}

