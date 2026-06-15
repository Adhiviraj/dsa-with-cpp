#include<iostream>
using namespace std;

void update(int **p2){
    // p2 = p2 + 1;
    // //kuch change nhi hoga

    *p2 = *p2 + 1;
    // // the Address of p will changes 

    // **p2 = **p2 + 1;
    // the value of i will update
}

int main(){
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << "before :- " << i << endl; 
    cout << "before :- " << p << endl; 
    cout << "before :- " << p2 << endl;
    
    update(p2);

    cout << "After :- " << i << endl;
    cout << "After :- " << p << endl;
    cout << "After :- " << p2 << endl;

    return 0;
}