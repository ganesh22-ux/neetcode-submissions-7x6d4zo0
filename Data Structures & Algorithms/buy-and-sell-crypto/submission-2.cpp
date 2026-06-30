class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i;
        int maxp=0;
        int minb=prices[i];
        for(int &sell :prices){
            maxp=max(maxp,sell-minb);
            minb=min(minb,sell);

        }
        return maxp;
    }
};
