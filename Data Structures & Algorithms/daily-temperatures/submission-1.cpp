class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>result(n,0);
        stack<pair<int,int>> stk;
        for(int i=0;i<n;i++){
            int t=temperatures[i];
            while(!stk.empty() && t>stk.top().first){
                auto pair=stk.top();
                stk.pop();
                res[pair.second]=i-pair.second;

            }
            stk.push({t,i});
        }
        return res;
    }
};
