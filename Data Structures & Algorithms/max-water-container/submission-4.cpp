class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int l=0,r=n-1;
        int ans=0;
        while(l<r){
            int area=min(height[l],height[r]) *(r-l);
            ans=max(area,ans);
            if(height[l] <= height[r]){
                l++;
            }else{
                r--;
            }
        }
        return ans;
    }
};
