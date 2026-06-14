#include<iostream>
using namespace std;

// void update(int n){
//     n++;
// }

// When we use pass by value the copy will shared in functions

// for update we use pass by reference

void update(int &n){
    n++;
}


int main(){
    int i = 7;

    // int &j = i;

    // cout << i << endl;
    // cout << j << endl;

    // j++;
    // cout << i << endl;

    // i++;
    // cout << j << endl;

    cout << i << endl;
    update(i);
    cout << i << endl;

    return 0;
}