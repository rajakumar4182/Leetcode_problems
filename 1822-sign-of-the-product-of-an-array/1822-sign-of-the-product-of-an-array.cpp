class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long int prod  =1;
        int countN = 0;
        for(int i=0;i<nums.size();i++){
             if(nums[i] < 0) countN++;
            
            if(nums[i] == 0){
                return 0;
            }
        }
        if(countN % 2 == 0) return 1;
        else return -1;
    }
};