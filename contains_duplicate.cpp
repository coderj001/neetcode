
#include <unordered_map>
#include <vector>

class Solution {
public:
  bool hasDuplicate(std::vector<int> &nums) {
    std::unordered_map<int, int> indx;
    for (size_t i = 0; i < nums.size(); i++) {
      if (indx.find(nums[i]) != indx.end()) {
        return true;
      } else {
        indx[nums[i]] = 1;
      }
    }
    return false;
  }
};
