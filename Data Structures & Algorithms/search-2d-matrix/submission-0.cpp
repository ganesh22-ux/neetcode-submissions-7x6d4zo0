class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int Row=matrix.size(), Col=matrix[0].size();
        int l=0;
        int r=Row*Col-1;
        while(l<=r){
            int m=l+(r-l)/2;
            int row=m/Col , col=m%Col;
            if(target> matrix[row][col]){
                l=m+1;
            }else if(target<matrix[row][col]){
                r=m-1;
            }else{
                return true;
            }
        }
        return false;
    }
};
