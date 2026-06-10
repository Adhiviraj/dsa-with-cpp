#include<iostream>
using namespace std;

int main(){
    int i = 5;
    int *p = &i;
    int **p2 = &p;
// Address of i -->
    cout << " Address of i :- " << p << endl;
    cout << " Address of i :- " << &i << endl;

// Value of i --> 
    cout<< " Value of i :- " << i << endl;
    cout<< " Value of i :- " << *p << endl;
    cout<< " Value of i :- " << **p2 << endl;

// value of p -->
    cout<< " Value of p :- " << &i << endl;
    cout<< " Value of p :- " << p << endl;
    cout<< " Value of p :- " << *p2 << endl;
// Which is Address of i --

// Address of p -->
    cout << " Address of p :- " << &p << endl;
    cout << " Address of p :- " << p2 << endl;

// Value of p2 -->
    cout << " Value of p2 :- " << p2 << endl;
// Which is Address of p --

// Address of p2 -->
    cout << " Address of p2 :- " << &p2 << endl;
}