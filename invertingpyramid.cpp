#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of- ";
    cin>>n;
     
    int i=1;
    while(i<n){
        int j=1;
        while(j<i){
            cout<<" ";
            j++;
        }
        j=0;
        while(j<=n-i-1){
            cout<<"*";
            j++;
        }
        j=0;
        while(j<n-i-1){
            cout<<"*";
            j++;
        }
        i++;
        cout<<endl;
    }
    

}
