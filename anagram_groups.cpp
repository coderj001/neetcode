#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
      unordered_map<string, vector<string>> grps;
      for(const string& str: strs){
        string key = str;
        sort(key.begin(), key.end());
        grps[key].push_back(str);
      }

      vector<vector<string>> anagram_grps;

      for(auto &[_, grp]: grps){

        anagram_grps.push_back(move(grp));

      }
      return anagram_grps;
    }

    bool anagram(string a, string b){
      if (a.size() == b.size()) return false;
      unordered_map<char, int> count;
      for(char ch: a) count[ch]++;
      for (char ch: b)  {
        if (--count[ch] < 0) return false;

      }
      return true;
    };
};

