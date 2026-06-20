#include<iostream>
using namespace std;

int partition(int arr[], int s , int e){

    int pivot = arr[s];
    
    int count = 0;

    for(int i = s + 1; i < e; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }

    //place the pivot element on right index
    int pivotIndex = s + count;
    swap(arr[pivotIndex],arr[s]);

    // left and right wala part sambal lete hai
    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    
}

void QuickSort(int *arr, int s, int e){

    if(s >= e){
        return;
    }
    // partition karnge--
    int p = partition(arr,s,e);

    //left part sort karo

    QuickSort(arr, s , p - 1);

    //Right part sort karo 

    QuickSort(arr , p + 1, e);

}

int main(){

    int arr[5] = {2, 5, 1, 6, 9};
    int n = 5;

    cout << "Before Sorting: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    QuickSort(arr, 0, n - 1);

    cout << "After Sorting: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}