class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
//         //---method 1-------
//         for(int i=0;i<nums.size();i++){
//             nums[i] *= nums[i];
//         }
        
//         sort(nums.begin(),nums.end());
//         return nums;
        
        //------method-2--------
        vector<int> res(nums.size());
        int l=0,r= nums.size()-1;
        for(int i=nums.size()-1;i>=0;i--){
            if(abs(nums[r]) > abs(nums[l])) res[i] = nums[r]*nums[r--];
            else res[i] = nums[l] * nums[l++];
        }
        return res;
    }
};