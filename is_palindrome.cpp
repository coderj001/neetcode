#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
      string filtered;
      for (char c: s) {
        if (isalnum(c)) {
          filtered += tolower(c);
        }
      }
      int n = filtered.length();
      for (int i = 0; i < n; i++) {
        if (filtered[i] != filtered[n - i - 1]) {
          return 0;
        }
      }
      return 1;
    }
};

int main()
{
  Solution s;
  cout << s.isPalindrome("tab a cat") << endl;
  return 0;
}


