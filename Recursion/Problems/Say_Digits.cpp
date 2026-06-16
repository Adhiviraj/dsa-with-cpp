#include<iostream>
using namespace std;

void say(int digit, string arr[]){
    if(digit == 0){
        return ;
    }

    int n = digit % 10;
    
    digit = digit / 10;

    say(digit, arr);
    cout << arr[n] << " ";
}
int main(){
    int digits;
    cout << "Enter the digits :- ";
    cin >> digits;

    string arr[10] = {
        "zero" , "one", "two" , "three" , "four" , "five"
        "six", "seven" , "eight" , "nine" 
    };

    say(digits , arr);

    return 0;
}