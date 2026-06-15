#include<iostream>
using namespace std;

int main() {
    int row;
    cout << "Enter the row of Arr :- ";
    cin >> row;

    int col;
    cout << "Enter column of Arr :- ";
    cin >> col;

    // Creating 2D array Initializing 
    int **arr = new int*[row];

    for(int i = 0; i < row; i++) {
        arr[i] = new int[col];
    }

    // Taking input
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    // Output
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Free memory
    for(int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}