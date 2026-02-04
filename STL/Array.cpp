#include<iostream>
#include<array>
using namespace std;

int main()

    int basic(4) = {3,4,5,2};
    //this same as int stl array:
    array<int,4> a = {3,2,1};

    int size = a.size();

    cout<<"element at 2rd index->"<<a.at(2)<<endl;

    cout<<"Empty or not->"<<a.empty()<<endl;

    cout<<"First Element"<<a.first()<<endl;

    cout<<"last element"<<a.last()<<endl;