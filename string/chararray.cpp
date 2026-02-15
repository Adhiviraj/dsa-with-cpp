#include<iostream>
using namespace std;\

void reverse(char name[],int n){
    int s = 0;
    int e = n-1;

    while(e>s){
        swap(name[s++],name[e--]);
    }
}

int getlength(char name[]){
    int count = 0;
    for(int i=0; name[i]!= '\0';i++){
        count++;
    }
    return count;
}
int main(){

    char name[20];
    
    cout<<"Enter the name:- ";
    cin>> name;

//name[2] = '\0';
//putting null value at index 2
    
    
    cout<<endl;
    int  len = getlength(name);
    cout<<"You name is - ";
    cout<< name << endl;
    reverse(name,len);
    cout<<name<<endl;. 

    cout<<"Length: "<< len <<endl;
}