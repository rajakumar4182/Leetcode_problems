class Solution {
public:
    void sortColors(vector<int>& nums) {
       int countZ = 0,countO = 0,countT = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0) countZ++;
            else if(nums[i] == 1) countO++;
            else countT++;
        }
        int i =0;
        while(countZ--){
            nums[i++] = 0;
        }
        while(countO--){
            nums[i++] = 1;
        }
        while(countT--){
            nums[i++] = 2;
        }
    }
};