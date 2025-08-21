#include<iostream>
using namespace std;

int ap(int a1, int n, int d)
{

    int ans = a1+(n-1)*d;
    return ans;
    
}

int main(){
    int a1,n,d;
    cout<<"Enter the value of first term-"<<endl;
    cin>>a1;

    cout<<"Enter the value of common difference-"<<endl;
    cin>>d;

    cout<<"Enter the value of n-"<<endl;
    cin>>n;

    cout<<"nth term of ap "<<ap(a1,n,d);
    
    return 0;

}