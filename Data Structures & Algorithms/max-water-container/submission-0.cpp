class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int l=0,r=n-1;
        int ans=0;
        int max=0;
        for(int i=0;i<n-1;i++){
           ans=l*hights[r];
           max=max(max,ans);
        }
    }
    return max;
};
