// vector - A vector in C++ is a dynamic array that can
//          grow or shrink in size as needed

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> b(5,1);
    cout<<"print n"<<endl;
    for(int i:b){
        cout<<i<<" "<<endl;
    }
    vector<int> a;
    cout << "Capacity :- " << a.capacity() << endl;

    a.push_back(1);
    cout << "Capacity :- " << a.capacity() << endl;

    a.push_back(2);
    cout << "Capacity :- " << a.capacity() << endl;

    a.push_back(3); 
    cout << "Capacity :- " << a.capacity() << endl;
    cout << "size :- " << a.size() << endl;

    cout<<"Element of 2nd index :- "<<a.at(2) << endl;

    // we can find front and back of vector
    cout<<"Front and back of the vector :- "<<a.front()<<","<<a.back()<<endl;

    cout<<"Before pop"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    a.pop_back();

    cout<<"after pop"<<endl;
    for(int i:a){
        cout<<i<<" "<<endl;
    }
/*clear function is use only for clear the vector not reduce the capacity of 
 vector(size = 0 not capacity is zero)
*/

cout<<"before clear size :- "<<a.size()<<endl;
a.clear();
cout<<"after clear size :- "<<a.size()<<endl;

}
   