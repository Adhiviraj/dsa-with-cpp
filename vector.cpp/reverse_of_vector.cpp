#include<iostream>
#include<vector> 
using namespace std;

vector<int> reverse_array(vector<int> v){
    int st = 0 , End = v.size()-1; 

    while(st <= End){
        swap(v[st],v[End]);
        st++;
        End--;
    }
    return v;
}

void print(vector<int> v){
    
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<",";
    }
    cout<<endl;
}


int main(){

    vector<int> v;
    
        v.push_back(11);
        v.push_back(7);
        v.push_back(3);
        v.push_back(12);
        v.push_back(4);
        vector<int> original = v;
        vector<int> ans = reverse_array(v);

        
        cout<<"The reverse this vector :- ";
        print(original);
        cout<<" is :- "; 
        print(ans);
        

        return 0;

}