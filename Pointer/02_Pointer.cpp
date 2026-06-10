#include<iostream>
using namespace std;

int main(){
    
    // // Pointer to int is created, and pointing to some garbage address
    // int *p;
    // // we don't use this Instead we int *p = 0 which is pointed towards null
    // // so it causes segmentation fault

    // int *p1 = 0;

    // cout<<p1<<endl; //segmentation fault
    // // cout<<*p1<<endl;

    // int i = 5;
    
    // int *q = &i; // form this method we can Initialise the pointer

    // cout<<q<<endl;
    // cout<<*q<<endl;

    // int *p2 = 0; // And also form this method we can do it ;
    // p2 = &i;

    // cout<<p2<<endl;
    // cout<<*p2<<endl;


    int num = 5;
    
    int a = num;
    a++;

    cout<<num<<endl;

    int *p = &num;
    cout<<"Before "<< num << endl;
    (*p)++;
    cout << "After " << num << endl;

//  copying a pointer 
    int *q = p;
    cout << q << " - " << p << endl;
    cout << *q << " - " << *p << endl;

// <-- Important Concept -->

    int i = 3;
    int *t = &i;
    // cout << (*t)++ <<endl;
    *t = *t + 1;
    cout << *t << endl;
    cout << "before t "<< t << endl;
    t = t + 1;
    cout << "After t "<< t << endl;
    
    cout << *t << endl;
}