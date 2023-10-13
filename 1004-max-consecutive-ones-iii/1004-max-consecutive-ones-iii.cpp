class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i =0;
        int zero_count = 0;
        int count = 0;
        for(int j =0;j<nums.size();j++){
            if(nums[j] == 0){
                zero_count++;
            }

            while(zero_count > k){
                if(nums[i] == 0){
                    zero_count--;
                }
                i++;
            }
            count = max(count, j-i+1);
        }
        return count;
    }
};