#include <bits/stdc++.h>
#include <sstream>
using namespace std;

class Solution {
  public:
    bool isPalindrome(int x) {
      // convert to string
      stringstream ss;
      ss << x;
      string str = ss.str();

      int start = 0, end = str.length() - 1;

      while (start < str.length()) {
        // not palindrome
        if (str[start] != str[end]) {
          return false;
        }
        // close in to the middle index by 1
        start++;
        end--;
      }
      return true;
    }
};

int main() {
  Solution s;
  int x = -121;
  bool result = s.isPalindrome (x);
  cout << result << endl;
  return 0;
}