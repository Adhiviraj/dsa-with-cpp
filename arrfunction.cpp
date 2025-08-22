#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    
    //print the array
    cout<< " Print the array "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int third[15]={2,7};
    int n=15;
    printArray(third,15);

    //initialising all location with 0
    int fourth[10]={0};
    n=10;
    printArray(fourth,10);

    // initialising all location with 1 [ not possible with below line ]
    int fifth[10]={1};

    n=10;
    printArray(fifth,10);

}