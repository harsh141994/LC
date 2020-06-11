#include <iostream>
#include <vector>
#include "set"

using namespace std;


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