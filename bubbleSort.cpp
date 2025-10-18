#include <iostream>
#include <vector>
using namespace std;

vector<int> bubbleSort(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        // for first round 1 ti n-1;
        bool swapped = false;
        for (int j = 0; j < n - i -1; j++)
        {
            // process element till n-ith index
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
    }
    return arr;
}

int main()
{
    vector<int> arr = {5, 13, 6, 1, 2, 2};
    int n = arr.size();
    vector<int> SortedArr = bubbleSort(arr, n);
    cout << "{";
    for (int i = 0; i < n; i++)
    {
        cout << SortedArr[i];
        if (i != n - 1)
            cout << ",";
    }
    cout << "}" << endl;
}