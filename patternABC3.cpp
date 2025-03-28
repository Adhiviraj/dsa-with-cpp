#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    char ch = 'A';

    while(row<=n){
        int column=1;
        while(column<=n){
            cout<<ch;
            ch++;
            column++;
        }
        row++;
        cout<<endl;
    }
}