#include<iostream>
using namespace std;

bool isprime(int n){

    for(int i = 2; i<n;i++){
        if(i%n==0){
            // hogya divide ; not a prime number;
            return 0;
        }
    }
    return 1;
}

int main(){

    int n;
    cout<<"Enter the number to check isprime or not - ";
    cin>>n;

    if(isprime(n)){
        cout<<" is a prime number"<<endl;
    }
    else{
        cout<<" is not a prime number";
    }


}