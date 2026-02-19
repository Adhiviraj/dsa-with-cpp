#include<iostream>
using namespace std;

int main(){
    string s = "aaaaabbbbbbbbbbbbcccc";
    int freq[26] = {0}; //--initialize all to 0
    
    for(int i= 0;i<s.length();i++){
        int index = s[i] - 'a'; //convert to index
        freq[index]++;
    }

/*
    // print frequency

    for(int i = 0; i < 26; i++){
        if(freq>0){
            char ch = i + 'a';
            cout<<ch<<"->"<<freq[i]<<endl;
        }
    }
*/
    int count = 0;
    
    for(int i= 0;i<26;i++){
        if(freq[i]> count){
            count = freq[i];
        }
    }
    cout<<"this the lexicographically smaller character :- ";
    for(int i = 0; i < 26 ; i++){
        if(freq[i] == count){
            char ch = i + 'a';
            cout<< ch; 
            break;
        }
    }

    
}