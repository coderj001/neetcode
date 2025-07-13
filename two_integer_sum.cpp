#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      size_t n = nums.size();
      
      for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
          if (nums[i]+nums[j] == target) {
            return vector<int>{i, j};
          }
        }
      }
      return vector<int>{};
    }
};

