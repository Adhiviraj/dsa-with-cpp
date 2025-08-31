#include<iostream>
#include<set>
using namespace std; 

int main() {
    int n;
    cout << "Enter the size of an array - ";
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++ ){
        cin >> arr[i];
    }

    // Step 1: Find max value
    int maxval = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > maxval){
            maxval = arr[i];
        }
    }
    cout << "Maximum value in array: " << maxval << endl;

    // Step 2: Create frequency array
    int count[maxval+1] = {0};
    for(int i=0; i<n; i++){
        count[arr[i]]++;
    }

    // Step 3: Print frequencies
    for(int i=0; i<=maxval; i++){
        if(count[i] != 0){
            cout << i << " occurs " << count[i] << " times" << endl;
        }
    }

    // Step 4: Check if all frequencies are unique
    set<int> freq;
    bool unique = true;
    for(int i=0; i<=maxval; i++){
        if(count[i] > 0){
            if(freq.find(count[i]) != freq.end()){
                unique = false; // duplicate frequency found
                break;
            }
            freq.insert(count[i]);
        }
    }

    if(unique) 
        cout << "All frequencies are unique" << endl;
    else 
        cout << "Some frequencies repeat" << endl;

    return 0;
}
