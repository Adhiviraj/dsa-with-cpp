#include<iostream>
using namespace std;

void printarray(int arr[],int n){
        for(int i=0; i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

void sortOne(int arr[], int n) {
    int count0 = 0, count1 = 0, count2 = 0;

    // Count elements
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) count0++;
        else if (arr[i] == 1) count1++;
        else count2++;
    }

    // Overwrite array
    int index = 0;
    while (count0--) arr[index++] = 0;
    while (count1--) arr[index++] = 1;
    while (count2--) arr[index++] = 2;
}


int main(){
    int arr[]={1,0,1,2,1,2,0,1,2};

    sortOne(arr,9);
    printarray(arr,9);
    

    return 0;
}