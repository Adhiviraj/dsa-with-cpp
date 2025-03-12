#include<iostream>
using namespace std;

int main(){
    double fahrenheit,celsius;
    cout<<"Enter the tempreture in (f)"<<endl;
    cin>>fahrenheit;

    celsius=(fahrenheit-32)*5.0 / 9.0;
    cout<<"temprature in (C)"<<celsius<<endl;
    return 0;
}