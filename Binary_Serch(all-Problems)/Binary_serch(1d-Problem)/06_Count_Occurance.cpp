/*
#include <vector>
#include <algorithm> 
using namespace std;

    vector<int> searchRange(vector<int>& nums, int target) {

        int n = nums.size();

        int lb = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int ub = upper_bound(nums.begin(),nums.end(),target)-nums.begin();

        if(lb == n || nums[lb] != target) {
            return {-1,-1};
        }
        return {lb,ub-1};
    }


int count(vector<int>& arr, int n, int x) {
    vector<int> ans = searchRange(arr, x);
    if (ans[0] == -1) {
        return 0;
    }
    return ans[1] - ans[0] + 1;
}
*/