class Solution {
public:
    void solve(int ind,vector<int> arr,int target,vector<int> &temp,vector<vector<int>> &ans){
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        for(int i = ind;i<arr.size();i++){
            if(i > ind && arr[i] == arr[i-1]) continue;
            if(arr[i] > target) break;
            temp.push_back(arr[i]);
            solve(i+1,arr,target - arr[i], temp,ans);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        solve(0,candidates,target,temp,ans);
        return ans;
    }
};