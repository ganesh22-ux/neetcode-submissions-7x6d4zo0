class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> freq;
        int res=0;
        int l=0;
        int maxf=0;
        for(int r=0;r<s.size();r++){   
            freq[s[r]]++;
            maxf=max(maxf,freq[s[r]]);   
            while((r-l+1)-maxf>k){
                freq[s[r]]--;
                l++;
            }
            res=max(res,r-l+1);
        }
        return res;
        }
};
