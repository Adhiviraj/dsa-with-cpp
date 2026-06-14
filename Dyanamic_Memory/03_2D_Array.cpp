#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the row of 2D-Array:- ";
    cin >> n;

    int ** arr = new int*[n];


// for square 2D - Array--

    for(int i = 0; i < n; i++){
        arr[i] = new int [n];
    }

// Creation done!

// Taking input--
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j]; 
        }
    }

// Taking Output--
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}