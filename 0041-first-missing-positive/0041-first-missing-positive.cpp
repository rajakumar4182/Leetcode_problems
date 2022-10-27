class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> m;
        for(auto elem :nums)
            m[elem]++;
        int ans;
        // if(n==1&& nums[0]==1) ans =2;
        for(int i=1;i<=n+1;i++){
            if(m.find(i) == m.end()){
                ans = i;
                break;
            }
            
        }
        return ans;
    }
};