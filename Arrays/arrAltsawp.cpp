#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int first = 0;
    int second = 1;

    while(second<n){
        swap(arr[first],arr[second]);
        first+=2;
        second +=2;
    }
}
void printArray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

int main(){
    int arr[6]={1,4,0,5,-2,15};
    int brr[5]={2,6,3,9,4};

    reverse(arr,6);
    reverse(brr,5);

    printArray(arr,6);
    printArray(brr,5);

    return 0;
}