#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
      unordered_map<int, int> map;
      for (int i = 0; i < numbers.size(); i++) {
        int p = target - numbers[i];
        if (map.find(numbers[i]) != map.end())  {
          return  {map[numbers[i]] + 1, i+1};
        } 
        map[p] = i;
      }
      return {};
    }
};

int main()
{
  vector<int> nums {2, 3, 4};
  int target = 6;

  Solution s;
  vector<int> sol = s.twoSum(nums, target);

  cout << "Output: " << endl;
  for (auto i : sol) {
    cout << i;
  }
  cout << endl;

  return 0;
}
