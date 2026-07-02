class Solution {
public:
    bool isValid(string s) {
        stack<char> stook;
        unordered_map<char,char> pus{
            {')','('},
            {'}','{'},
            {']','['}
        };
        for(char c:s){
            if(pus.contains(c)){
                if(!stook.empty() && stook.top() == pus[c]){
                stook.pop();
                }else{
                    return false;
                }

            }else{
               stook.push(c); 
            }
        }
        return stook.empty();
    }
};
