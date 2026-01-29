#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;

    while(i<=n){
        int j=1;
        while(j<=n-i+1){
        cout<<j;
        j++;
        }

        while(j<=n){
            cout<<"**";
            j++;
        }
        j=n-i+1;
        while(0<j){
        cout<<j;
        j--;
        }
        
        i++;
        cout<<endl;
    }
   
    
}