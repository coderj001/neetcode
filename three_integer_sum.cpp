#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) { 
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> res;

        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i-1]) continue; // skip dup next nums
            int target = -nums[i];
            int l = i + 1;
            int r = n - 1;
            while (l < r) {
                int sum = nums[l] + nums[r];
                if (sum == target) {
                    res.push_back({nums[i], nums[l], nums[r]});
                    ++l; --r;
                    while(l < r && nums[l] == nums[l-1]) ++l;
                    while(l < r && nums[r] == nums[r+1]) --r;
                } else if(sum < target) {
                    ++l;
                } else {
                    --r;
                }
            }
        }
        return res;
    }
};


int main()
{
    Solution s;
    // vector<int> vc{0, 1, 1};
    vector<int> vc{-1,0,1,2,-1,-4};
    vector<vector<int>> v =  s.threeSum(vc);
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << ", ";
        }
        cout << endl;
    }
    return 0;
}

// drgopukumar@gmail.com
