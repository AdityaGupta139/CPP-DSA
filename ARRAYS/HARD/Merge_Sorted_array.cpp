class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left=m-1;
        int right=n-1;
        int p=m+n-1;
        while(right>=0){
            if(left>=0 && nums1[left]>nums2[right] ){
                nums1[p]=nums1[left];
                left--;

            }
            else{
                nums1[p]=nums2[right];
                right--;
            }
            p--;
        }
    }
};
