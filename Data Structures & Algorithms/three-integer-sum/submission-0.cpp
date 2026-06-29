class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i=0,j=0,k=0;
        int res=0;
        while(i != j != k){
            if(nums[i]+nums[j]+nums[k] == 0){
                res=.{nums[i],nums[j],nums[k]};
            }
        }
        return res;
    }
};
