
//this is in binary serch method

/*
int lowerBound(vector<int> arr, int n, int x) {
	int low=0,high = n-1;
	int ans = n;
	while(low <= high) {
		int mid = (low+high)/2;
		if(arr[mid] >= x) {
			ans = mid;
			high = mid-1;
		}else {
			low = mid + 1;
		}
	}
	return ans;
}

*/

//in brute force approach  we can find the upper bound by simply finding the in leneaer serch algo 


// it is the impostant concept [arr[i] >= x]


//we can do in stl approch also , here we can do in this way

/*int lp = lower_bound(arr.begin(),arr.end(),x)-arr.begin();*/