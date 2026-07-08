class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int r=n-1;
            int mid=(i+r)/2;
            if(mid==target){
                return mid;
            }else if(target>mid){
                i=mid;
            }else{
                r=mid;
            }
        }
    }
};
