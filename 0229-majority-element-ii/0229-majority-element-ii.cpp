class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> m;
        for(auto it: nums){
            m[it]++;
        }
        
        for(auto it=m.begin();it!=m.end();it++){
            if(it->second > nums.size()/3){
                ans.push_back(it->first);
            }
        }
        return ans;
    }
};