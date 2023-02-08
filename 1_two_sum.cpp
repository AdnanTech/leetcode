#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> v;
    for(int i = 0; i < nums.size(); i++) {
      for(int j = i + 1; j < nums.size(); j++) {
        if (nums[i] + nums[j] == target) {
          return {i, j};
        }
      }
    }
    return v;
  }
};


int main(){
  Solution s ;
  vector<int> v;
  v={2,7,11,15};
  vector<int> a = s.twoSum (v, 11);
  for (auto i: a) {
    cout << i << ' ';
  }
  return 0;
}