#include <iostream>
#include <vector>
#include "set"

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
  sort(nums.begin(), nums.end());
  int n = nums.size();

  set<vector<int>> ans;

  for (int i=0; i<n-2; i++) {
    if (i!=0 && nums[i]==nums[i-1]) continue;
    for (int j= i+1, k= n-1; j<k && j<n; ) {
      if (nums[i] + nums[j] + nums[k]== 0) {
        vector<int> v;
        v.push_back(nums[i]);
        v.push_back(nums[j]);
        v.push_back(nums[k]);
        ans.insert(v);
        j++;
      }
      else if (nums[i] + nums[j] + nums[k] < 0) {
        j++;
      }
      else {
        k--;
      }
    }
  }

  vector<vector<int>> a;
  for (auto it=ans.begin(); it!=ans.end(); it++) {
    a.push_back(*it);
  }
  return a;
}

int main() {

  vector<int> nums{-20, -10, 30};
  vector<vector<int>> ans = threeSum(nums);

  for (int i=0; i<ans.size(); i++) {
    for (int j=0; j<ans[i].size(); j++) {
      cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}