class Solution {
public:
    int findMin(vector<int> &nums) {
        int l=0;
        int r=0;
        sort(nums.begin(),nums.end());
        int target=nums[0];
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                return nums[mid];
            }else if(target>mid){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        return -1;
    }
};
