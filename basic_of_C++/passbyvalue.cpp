#include<iostream>
using namespace std;

dummy(int n){
    n++;
    cout<<"the value of n-"<<n<<endl;
    return n;
}

int main(){
    int n; 
    cin >> n;

    dummy(n);

    cout<<"the value of n-"<<n;

    
}
