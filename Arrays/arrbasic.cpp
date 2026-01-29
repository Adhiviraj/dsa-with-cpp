#include<iostream>
using namespace std;

int main(){
    //declare
    int number[15];

    //accessing an array
    cout << "Valur at 14 index " << number[14] << endl;

    //cout << "Value at 20 index " << number[20] << endl;

    cout << endl << " Everything is Fine "<< endl << endl;

    //initialising an array 
    int second[3] = {5,7,11};

    //accesing an element
    cout <<" Value at 2 index "<<second[2]<<endl;

    int third[15]={2,7};

    //print the array
    int n= 15;
    cout<< " Print the array "<<endl;
    for(int i=0;i<n;i++){
        cout<<third[i]<<" ";
    }
    //initialising all location with 0
    int fourth[10]={0};
    //print the array
    n= 10;
    cout<< " Print the array "<<endl;
    for(int i=0;i<n;i++){
        cout<<fourth[i]<<" ";
    }
    // initialising all location with 1 [ not possible with below line ]
    int fifth[10]={1};
    //print the array
    n= 10;
    cout<< " Print the array "<<endl;
    for(int i=0;i<n;i++){
        cout<<fifth[i]<<" ";
    }
}