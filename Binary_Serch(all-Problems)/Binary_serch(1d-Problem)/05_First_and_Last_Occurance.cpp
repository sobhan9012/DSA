//first in linear serch also for brute force

/*
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1,last = -1;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] == target) {
                if(first == -1){
                    first = i;
                    last =  i;
                }
                else {
                    last = i;
                }
            }
        }
        return {first,last};
    }
};
*/