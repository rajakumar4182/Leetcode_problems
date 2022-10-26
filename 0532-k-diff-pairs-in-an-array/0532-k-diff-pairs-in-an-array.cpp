class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int count =0;
        unordered_map<int,int> m;
        for(auto it:nums)
            m[it]++;
        
        for(auto x:m){
            if(k==0){
                if(x.second >1)
                    count++;
            }
            else if(m.find(x.first + k) != m.end())
                    count++;
        }
        return count;
    }
};