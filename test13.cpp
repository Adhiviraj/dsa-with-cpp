#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // First half
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= n - i){
            cout << " ";
            j++;
        }

        j = 1;
        while(j <= 2 * i - 1){
            if(j == 1 || j == 2 * i - 1){
                cout << "*";
            }
            else{
                cout << " ";
            }
            j++;
        }
        cout << endl;
        i++;
    }

    // Second half
    i = 1;
    while(i <= n - 1){
        int j = 1;
        while(j <= i){
            cout << " ";
            j++;
        }

        j = 1;
        while(j <= 2 * (n - i) - 1){
            if(j == 1 || j == 2 * (n - i) - 1){
                cout << "*";
            }
            else{
                cout << " ";
            }
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}
