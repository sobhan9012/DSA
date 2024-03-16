/*pair<int, int> getFloorAndCeil(vector<int> &arr, int n, int x) {
    // Write your code here.

    int low = 0, high = n - 1;
    int floorValue = -1, ceilValue = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            floorValue = arr[mid];
            ceilValue = arr[mid];
            break;
        } else if (arr[mid] < x) {
            floorValue = arr[mid];
            low = mid + 1;
        } else {
            ceilValue = arr[mid];
            high = mid - 1;
        }
    }
    return make_pair(floorValue, ceilValue);
}*/