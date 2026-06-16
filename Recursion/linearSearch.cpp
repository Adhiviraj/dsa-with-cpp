#include<iostream>
using namespace std;

int findIndex(int arr[], int n , int key,int& i){
    if(n == 0){
        return -1;
    }

    if(arr[0] == key){
        return i;
    }

    i++;
    int remainingPart = findIndex(arr + 1, n -1, key , i);
    return remainingPart;
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
    int i = 0;
    int key;
    cout << "Enter the key :- ";
    cin >> key;

    int index = findIndex(arr, n, key,i);
    cout << index;
}    