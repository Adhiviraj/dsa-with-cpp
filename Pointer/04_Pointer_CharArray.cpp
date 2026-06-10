#include<iostream>
using namespace std;

int main(){
    // The Behavior of cout function is differnet for interger array and character array

    int arr[5] = { 1,2,3,4,5};
    char ch[6] = "abcde";

    cout << arr << endl;
    // attention here
    cout << ch << endl;

    char *c = &ch[0];
    // prints entire string
    cout << c << endl;

    char temp = 'z';
    char *p = &temp;
    // Run till the it find the null character
    cout << p << endl; 
}