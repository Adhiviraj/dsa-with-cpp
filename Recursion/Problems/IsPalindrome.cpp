#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i){
    //base case
    int j = str.length() - 1 - i;
    cout << i << " " << j << endl;
    if(i > j){
        return true;
    }

    if(str[i] != str[j]){
        return false;
    }
    else{
        return checkPalindrome(str,++i);
    }

}

int main(){
    string name = "yybbayy";
    
    bool isPalindrome = checkPalindrome(name, 0);

    if(isPalindrome){
        cout << "It's a Palindrome " << endl;
    }else{
        cout << "Its not a Palindrome " << endl;
    }
    return 0;
}