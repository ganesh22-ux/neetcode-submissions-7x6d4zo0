class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxarea=0;
        int n=heights.size();
        stack<int>stu;
        for(int i=0;i<=n;i++){
            while(!stu.empty() && (i == n || heights[stu.top()] >= heights[i])){
                int height=heights[stu.top()];
                stu.pop();
                int width=stu.empty()? i:i-stu.top()-1;
                maxarea=max(maxarea,height*width);
            }
            stu.push(i);
        }
        return maxarea;
    }
};
