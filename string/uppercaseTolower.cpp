#include<iostream>
using namespace std;

int getlength(char name[]){
    int count = 0;
    for(int i= 0;name[i] != '\0';i++){
        count++;
    }
    return count;
}

char tolowercase(char ch){
    if(ch>= 'A' && ch <= 'Z'){
        ch = ch - 'A' + 'a';
    }
    return ch;
}

bool IsValid(char ch){
    if((ch>='A' && ch<= 'Z')||
    (ch>='a' && ch<= 'z')||
    (ch>='0' && ch<= '9'))
    {
        return true;
    }

    else {
        return false;
    }
}

bool checkpalindrome(char a[],int n){
    int st=0;
    int e=n-1;

    while(st<=e){
        //check the starting element is valid or not 
        if(!IsValid(a[st])){
            st++;
            continue;
        }

        //check the end element is valid or not
        if(!IsValid(a[e])){
            e--;
            continue;
        }

        if(tolowercase(a[st]) != tolowercase(a[e])){
            return falsfe;
        }
        st++;
        e--;
    }
    return true;
}

int main(){
    char name[100];

    cout<<"Enter the string:- ";
    cin.getline(name,100); // ✅ important for spaces

    int len = getlength(name);
    cout<<"Is palindrome:- "<<checkpalindrome(name,len);

}