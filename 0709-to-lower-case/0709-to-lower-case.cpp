class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++){
            if(s[i] >= 'A' && s[i] <='Z'){
                int temp = s[i] - 'A';
                s[i] = temp +'a';
            }
        }
        return s;
    }
};