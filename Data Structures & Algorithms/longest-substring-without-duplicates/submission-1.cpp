class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> sub;
        int l=0;
        int res=0;
        for(int r=0;r<s.size();r++){
            while(sub.contains(s[r])){
                sub.erase(s[l]);
                l++;
            }
            sub.insert(s[r]);
            res=max(res,r-l+1);
        }
        return res;
    }
};
