class Solution {
public:
    vector<string> arr = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    void solve(string digits,vector<string> &result, int ind,string cur){
        if(ind == digits.size()){
            if(!cur.empty()){
                result.push_back(cur);
            }
            return;
        }
        
        string letters = arr[digits[ind] - '2'];
        
        for(char letter:letters){
            solve(digits,result,ind+1,cur+letter);
        }
    }    
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if(digits == "") return result;
        
        solve(digits,result,0,"");
        
        return result;
    }
};