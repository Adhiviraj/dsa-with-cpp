#include<iostream>
#include<vector>
using namespace std;

vector<int> insertion(vector<int> arr, int n){
    int i = 1;
    
    while(i < n){
        int temp = arr[i];
        int j = i - 1;
        
        while(j >= 0 && arr[j] > temp){
            arr[j + 1] = arr[j];  // shift
            j--;
        }
        
        arr[j + 1] = temp;  // insert temp in correct position
        i++;
    }
    return arr;
}

int main()
{
    vector<int> arr = {5, 13, 6, 1, 2, 2};
    int n = arr.size();
    vector<int> SortedArr = insertion(arr, n);
    cout << "{";
    for (int i = 0; i < n; i++)
    {
        cout << SortedArr[i];
        if (i != n - 1)
            cout << ",";
    }
    cout << "}" << endl;
}