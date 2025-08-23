#include<iostream>
using namespace std;

void update(int arr[],int n){
    
    cout<<endl<<"Inside the function"<<endl;

    // updating array's first element
    arr[0]= 120;

    // printing the array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"going back to main function "<<endl;
}

int main(){

    int arr[3]={1,2,3};

    update(arr,3);

    //print the array 
    cout<<endl<<"print in main function "<<endl;
    /* the reason in when we arr[] in update function 
    we are not using it's copy but it give the Address of
    array first's element so the will occurs will change 
    the value in main function also it not like pass by value 
    that use before 
    */
    for(int i= 0;i<3;i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}