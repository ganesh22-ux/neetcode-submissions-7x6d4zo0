class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        //this is brute fource
        // vector<int>ans;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     ans.push_back(nums[i]);
        // }
        // for(int i=0;i<n;i++){
        //     ans.push_back(nums[i]);
        // }
        // return ans;

        // this is not optimal but i came up with ist
        // int n=nums.size();
        // vector<int> ans;
        // while(ans.size() != 2*n){
        //     for(int i=0;i<n;i++){
        //     ans.push_back(nums[i]);
        // }
        // }
        // return ans;
        int n=nums.size();
        vector<int> ans(2*n);
        for(int i=0;i<2*n;i++){
            ans[i]=nums[i%n];
        }
        return ans;
    }
};