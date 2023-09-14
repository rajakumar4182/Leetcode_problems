class Solution {
public:
    void solve(int ind,vector<vector<int>> &ans,vector<int> &temp,vector<int> arr,int k,int n){
        if(k == 0 && n==0){
            ans.push_back(temp);
            return;
        }
        
        if(ind >= arr.size() || k < 0 || n<=0){
            return;
        }
        
        temp.push_back(arr[ind]);
        solve(ind+1,ans,temp,arr,k-1,n-arr[ind]);
        temp.pop_back();
        
        solve(ind+1,ans,temp,arr,k,n);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<int> arr ={1,2,3,4,5,6,7,8,9};
        solve(0,ans,temp,arr,k,n);
        // sort(ans.begin(),ans.end());
        return ans;
    }
};