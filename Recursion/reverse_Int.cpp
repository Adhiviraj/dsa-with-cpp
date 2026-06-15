#include<iostream>
using namespace std;

void ReverseInt(int n){
    if(n == 0){
        return ;
    }

    cout << n << endl;

    ReverseInt(n-1);
}

int main(){
    int n;
    cout<<"Enter the value of n :- ";
    cin >> n;

    ReverseInt(n);

    return 0;
}