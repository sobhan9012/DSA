/*
class Solution {
public:
    bool search(vector<int>& arr, int target) {
        int n = arr.size();
        int low = 0 , high = n-1;
        while(low <= high) {
            int mid = (low+high)/2;
            if(arr[mid] == target) {
                return true;
            }
            if(arr[low] == arr[mid] && arr[mid] == arr[high]) { //checking for the special cases like in array mostly duplicates are there like low,mid and high index have same element , for this condintion only work has to do srink the position of low and high
                low++;
                high--;
                continue;
            }
            if(arr[low] <= arr[mid]) {
                if(arr[low] <= target && target <= arr[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            else {
                if(arr[mid] <= target && target <= arr[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
        return false;
    }
};
*/