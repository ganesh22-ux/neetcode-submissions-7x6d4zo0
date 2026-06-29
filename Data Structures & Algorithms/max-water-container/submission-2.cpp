class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int l=0,r=n-1;
        int ans=0;
        int maxium;
        for(int i=0;i<n-1;i++){
           ans=l*heights[r];
           maxium=max(maxium,ans);
        }
    }
    return max;
};
