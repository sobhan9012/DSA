/*IT IS THE ITERATIVE APPROACH*/

// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int start = 0;
//         int end = nums.size() - 1;
//         while (start <= end){
//             int mid = start + (end - start) / 2;
//             if (nums[mid] == target){
//                 return mid;
//             }
//             else if (nums[mid] < target){
//                 start = mid + 1;
//             }
//             else{
//                 end = mid - 1;
//             }
//         }
//         return -1;
//     }
// };

/*IT IS THE RECURSIVE APPROACH*/

#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        return search_body_recursive(nums, 0, nums.size() - 1, target);
    }

    int search_body_recursive(vector<int>& nums, int low, int high, int target) {
        if (low > high) {
            return -1;
        }
        
        int mid = low + (high - low) / 2;
        
        if (nums[mid] == target) {
            return mid;
        } else if (target > nums[mid]) {
            return search_body_recursive(nums, mid + 1, high, target);
        } else {
            return search_body_recursive(nums, low, mid - 1, target);
        }
    }
};
