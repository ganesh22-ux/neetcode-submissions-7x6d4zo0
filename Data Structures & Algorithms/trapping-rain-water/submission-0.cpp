class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty()){
            return 0;
        }
        int l=0,r=height.size()-1;
        int maxleft=height[l],maxright=height[r];
        int res=0;
        while(l<r){
            if(maxleft<maxright){
                l++;
                maxleft=max(maxleft,height[l]);
                res+=maxleft-height[l];
            }else{
                r--;
                maxright=max(maxright,height[r]);
                res+=maxright-height[r];
            }

        }
        return res;
    }
};
