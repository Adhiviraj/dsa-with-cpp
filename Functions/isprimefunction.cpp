#include<iostream>
using namespace std;

bool isprime(int n) {

    if (n <= 1) {
        return false;
    }

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
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