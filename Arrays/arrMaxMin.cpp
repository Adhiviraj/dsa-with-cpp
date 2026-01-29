#include<iostream>
#include<climits>
using namespace std;

int getmax(int num[],int n){

    int max=INT_MIN;

    for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    //get the value of maximum
    return max;
}

int getmin(int num[],int n){

    int min=INT_MAX;

    for(int i=0;i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    // get the value of minimum
    return min;
}

int main(){

    int size;
    cin>>size;

    int num[100];
    //taking input in the array
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"Maximum value in "<<getmax(num,size)<<endl;
    cout<<"Minimun value in "<<getmin(num,size)<<endl;

    return 0;
}