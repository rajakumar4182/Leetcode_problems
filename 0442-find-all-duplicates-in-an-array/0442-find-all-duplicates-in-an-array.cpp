class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        unordered_map<int,int> m;
        
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i]) != m.end())
                res.push_back(nums[i]);
            else
                m[nums[i]]++;
        }
        return res;
    }
};