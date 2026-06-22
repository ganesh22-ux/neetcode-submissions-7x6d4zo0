class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>ele;
        int res=0;
        for(int num:nums){
            if(!ele[num]){
                ele[num]=ele[num+1]+ele[num-1]+1;
                ele[num-ele[num-1]]=ele[num];
                ele[num+ele[num+1]]=ele[num];
                res=max(res,ele[num]);
            }
        }
        return res;
    }
};
