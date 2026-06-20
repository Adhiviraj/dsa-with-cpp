#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void solve(vector<int>& nums, vector<int> output, int index,
               vector<vector<int>>& ans) {

        // Base case
        if(index >= nums.size()){
            ans.push_back(output);
            return;
        }
        cout << index;
        // Exclude current element
        solve(nums, output, index + 1, ans);
        cout<<endl;
        cout << "after:-" << index << endl;
        // Include current element
        int element = nums[index];
        output.push_back(element);
        solve(nums, output, index + 1, ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;

        solve(nums, output, index, ans);
        return ans;
    }
};

int main() {
    vector<int> nums = {1, 2, 3};

    Solution obj;
    vector<vector<int>> result = obj.subsets(nums);

    // // Print all subsets
    // for(auto subset : result) {
    //     cout << "{ ";
    //     for(auto x : subset) {
    //         cout << x << " ";
    //     }
    //     cout << "}" << endl;
    // }

    return 0;
}