class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int ans = strs[0].size();
        int len = strs.size();
        
        for(int i=1;i<len;i++){
            int j=0;
            while(j <strs[i].size() && strs[i][j] == strs[0][j]) j++;
            
            ans = min(ans,j);
        }
        
        return strs[0].substr(0,ans);
    }
};