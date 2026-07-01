class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty()){
            return 0;
        }
        int res=0;
        for(int i=0;i<s.size();i++){
            unordered_set<char> sub;
            for(int j=i;j<s.size();j++){
                if(sub.contains(s[j])){
                    break;
                }else{
                    sub.insert(s[j]);
                }
            }
            res=max(res,(int)sub.size());
        }
        return res;
    }
};
