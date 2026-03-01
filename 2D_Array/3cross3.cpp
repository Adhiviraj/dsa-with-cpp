#include<iostream>
using namespace std;

int main(){
    int rows, columns;

    cout<<"Enter the row of 3*3 array :- ";
    cin>>rows;
    cout<<"Enter the column of 3*3 array :- ";
    cin>>columns;

    int arr[10][10];

    cout<<"Enter the element of the Array :- "<<endl;

    // Taking input
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){   // ✅ corrected here
            cin>>arr[i][j];
        }
    }

    cout<<"\nArray elements are:\n";

    // Printing output
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){   // ✅ corrected here
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}