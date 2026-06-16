#include<iostream>
using namespace std;

int sum(int arr[], int n){
    if(n == 0){
        return 0;
    }

    int sum1 = arr[0] + sum(arr + 1, n - 1);
    return sum1;
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

    int ans = sum(arr, n);
    cout << " the sum of array - " << ans;
}