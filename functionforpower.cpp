#include<iostream>
using namespace std;

int power(int num1, int num2){
    
    int ans=1;
    for(int i=1;i<=num2;i++){
        ans=ans*num1;
    }
    return ans;
}

int main(){
    int a,b;
    cin>>a>>b;
    int ans = power(a,b);
    cout<<"ans is "<<ans;

    int c,d;
    cin>>c>>d;
    ans = power(c,d);
    cout<<"ans is "<<ans;

    int e,r;
    cin>>e>>r;
    ans = power(e,r);
    cout<<"ans is "<<ans;

    int q,w;
    cin>>q>>w;
    ans = power(q,w);
    cout<<"ans is "<<ans;
}