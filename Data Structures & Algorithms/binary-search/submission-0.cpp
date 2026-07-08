class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,r=n-1;
        int mid=(l+r)/2;
        if(target == mid){
            return mid;
        } 
        else if(target>mid){
            l=mid;
        }  
        else{
            r=mid;
        }  
    }
};
