#include<iostream>
using namespace std;

int main(){
    int nums = 5;

    cout << nums << endl;

    // Address operater - &
    cout<<"The Address of the nums - "<<&nums<<endl;

    // pointer:- stores Address

    int *p = &nums;

    //if the postion of nums is 100 then p[100] pointer will
    // store it postion of the nums

    // Meaning of *p p is a pointer to int

    // we always initialize the pointer with same data types 
    // if the data type is char we initialize the char *p = &ch
}