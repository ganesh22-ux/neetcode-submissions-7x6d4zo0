class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>different;
        int n=nums.size();
        for(int i=0;i<n;i++){
             different[nums[i]]=i;
        }
        for(int i=0;i<n;i++){
            int diff=target-nums[i];
            if(different.count(diff) && different[diff] !=i){
                return{i,different[diff]};
            }
        }
        return {};

    }
};
