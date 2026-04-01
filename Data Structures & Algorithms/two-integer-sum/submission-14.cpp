class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>different;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int diff=target-nums[i];
            if(different.find(diff) != different.end()){
                return{different[diff],i};
            }
            different.insert({nums[i],i});
        }
        return{};
    }
};
