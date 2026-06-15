#include<iostream>
using namespace std;

int power(int n){
    //base case--
    if(n == 0){
        return 1;
    }

    int smallproblem = power(n-1);
    int bigProblem = 2 * smallproblem;

    return bigProblem;
}

int main(){
    int n;
    cout<< "Enter the power :- ";
    cin >> n;

    int ans = power(n);
    cout << ans << endl;
}