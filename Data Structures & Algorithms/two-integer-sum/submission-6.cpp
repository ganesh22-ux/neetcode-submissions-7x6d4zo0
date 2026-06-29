class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>different;
        int n=nums.size();
        for(int i=0;i<n;i++){
             different[nums[i]]=i;
        }
        for(i=0;i<n;i++){
            int diff=target-nums[i];
            if(difference.count(diff) && difference[diff] !=i){
                return{i,difference[diff]};
            }
        }
        return {};

    }
};
