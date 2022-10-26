class Solution {
public:
    vector<vector<int>> res;
    void solve(vector<int> &nums, int i,vector<int> op){
        
        if(nums.size()==i){
            res.push_back(op);
            return;
        }
        
        
        solve(nums, i+1,op);
        op.push_back(nums[i]);
        solve(nums,i+1,op);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int> op;
        solve(nums,0,op);
        return res;
    }
};