#include<iostream>
using namespace std;

int main(){
    /*
    int arr[5] = {3,4,5,6,7};

    cout<<"The Address of arr :- " << arr << endl;
    cout<<"The Address of arr :- " << &arr[0] << endl;

    cout<<"The value of arr at first location :- "<< arr[0]<< endl;
    cout<<"The value of arr at first location :- "<< *arr << endl;

    // multiple oprations 

    cout << " 1th :- " << *(arr + 1) << endl;
    cout << " 2th :- " << *(arr + 2) << endl;
    cout << " 3th :- " << &arr + 1 << endl;
    cout << " 4th :- " << &arr[1] + 1 << endl;

    // So, We get -
    // Arr[i] = *(Arr + i)
    // ** Important--
    // we can also write this formula 
    // i{Arr} = *(i + Arr)
    int i = 3;
    cout<< " 5th :- " << i[arr];
    // The main difference b/w array and pointer 
*/
//     int temp[10];
//     cout << sizeof(temp)<< endl;
//     cout << sizeof(*temp)<< endl;

//     int *ptr = &temp[0];
//  // int *ptr = temp; both arr givem the address of starting of array
//     cout << sizeof(ptr) << endl;
//     cout << sizeof(*ptr) << endl;

//     int a[20] = {1,2,3,4,5,6,7,8};
//     cout << &a[0] << endl; 
//     cout << &a << endl; 
//     cout << a << endl; 

//     int *p = &a[0];

//     cout<< p << endl;
//     cout<< *p << endl;
//     cout<< &p << endl;
// 

    int arr[10];

    // error

    // arr = arr + 1;

    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr + 1;
    cout<< ptr << endl;

    return 0;
}

