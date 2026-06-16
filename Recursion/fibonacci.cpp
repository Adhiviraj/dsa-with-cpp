#include<iostream>
using namespace std;

void fib(int f, int s, int size){
    int i = 2;

    // base case
    if(i == size){
        return;
    }

    int sum = f + s;
    size--;
    cout << sum << endl;
    fib(s , sum , size);g
}

int main(){
    int size;
    cout<<"Enter the size of fib :- ";
    cin >> size;

    int f = 0;
    int s = 1;

    cout << f << endl;
    cout << s << endl;
    fib(f , s , size);
}