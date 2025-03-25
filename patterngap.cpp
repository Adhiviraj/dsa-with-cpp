#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n=";
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            if(i+j>n){
                cout<<"*";
            }
            else{
                cout<<"_";
            }
                j++;
        }
        cout<<endl;
        i++;
    }





}