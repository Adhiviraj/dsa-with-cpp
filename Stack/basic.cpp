#include<iostream>
// #include<stack> 
using namespace std;

class stack{
    // properties
    public:
        int *arr;
        int top;
        int size;

    // behaviour
    stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1 ){
            top++;
            arr[top] = element;
        }else{
            cout << "Stack overFlow" << endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout << "stack underflow" << endl;
        }
    }

    int peek(){
        if(top >= 0 && top < size){
            return arr[top];
        }else{
            cout <<"Stack is Empty" << endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }

};

int main(){
    // stack<int> s;

    // // <--push operation-->
    // s.push(2);
    // s.push(3);

    // // <--pop operation-->
    // s.pop();

    // cout<<"Printing Top Element " << s.top() << endl;

    // if(s.empty()){
    //     cout << "Stack is empty " << endl;
    // }else{
    //     cout << "Stack is not Empty " << endl;
    // }

    // cout <<"size of stack - " << s.size() << endl;


    stack st(5);

    st.push(22);
    st.push(43);
    st.push(33);

    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;



}