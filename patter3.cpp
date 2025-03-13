#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int i = 1;

    while (i <= n) {
        int j = 1;
        while (j <= n) {
            char ch = 'A' + i - 1;  // Generate character based on row number
            cout << ch;
            j = j + 1; 
        }
        cout << endl;  // Move to the next line after finishing a row
        i = i + 1;     // Move to the next row
    }
    
    return 0;
}
