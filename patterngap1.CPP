#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;

    while(i<=n){
        //print space
        int space=n-i;
        while(space){
            cout<<" ";
            space=space-1;
        }
        //print first triangle
        
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }

        //print second triangle 
        int start=i-1;
        while(start){
            cout<<start;
            start--;
        }
        cout<<endl;
        i++;
    }
}