// upper bound in binary serch algo 

/*
int upperBound(vector<int> &arr, int x, int n){
	Write your code here.	
	int low = 0,high = n;
	int ans = n;
	while(low <= high) {
		int mid = (low+high)/2;
		if(arr[mid] > x) {
			ans = mid;
			high = mid-1;
		}else {
			low = mid + 1;
		}
	}
	return ans
}
*/


//in stl we can do this in 

//	int up = upper_bound(arr.begin(),arr.end(),x)-arr.begin();


/*the imp conceopt is [arr[i] > x]*/