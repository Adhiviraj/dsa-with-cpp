#include<iostream>
#include<stack>
using namespace std;

int main(){
    string str = "babbar";

    stack<char> s;

    for(char ch : str){
        s.push(ch);
    }

    string ans = "";

    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }

    cout << "Answer is - " << ans << endl;

    return 0;
}