#include<iostream>
using namespace std;

int main(){
    int num = 5;

    int *p1 = &num;

    cout<<"Address of num :- "<< &num<<endl;

    cout<<"Address of pointer:- "<<p1<<endl;
    cout<<"Value of pointer:- "<<*p1<<endl;

    double pi = 3.14;

    double *p2 = &pi;

    cout<<"Address of pointer:- "<<p2<<endl;
    cout<<"Value of pointer:- "<<*p2<<endl;

    cout<<"Size of num :- "<< sizeof(num) << endl; 
    cout<<"Size of pi :- "<< sizeof(pi) << endl; 
    cout<<"Size of p1 :- "<< sizeof(p1) << endl; 
    cout<<"Size of p2 :- "<< sizeof(p2) << endl; 
}