
int findfloor(vector<int>& nums, int target) {
    int n=nums.size();
	int low=0,high=n-1;
	int ans=-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(nums[mid]<=target){
			ans=nums[mid];
			low=mid+1;

		}
		else{
			high=mid-1;
		}
	}
	return ans;
    }

	    int findceil(vector<int>& nums, int target) {
        int n=nums.size();
	int low=0,high=n-1;
	int ans=-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(nums[mid]>=target){
			ans=nums[mid];
			high=mid-1;

		}
		else{
			low=mid+1;
		}
	}
	return ans;
    }
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int floor,ceil;
	floor=findfloor(a,x);
	ceil=findceil(a,x);
	return {floor,ceil};
	
}