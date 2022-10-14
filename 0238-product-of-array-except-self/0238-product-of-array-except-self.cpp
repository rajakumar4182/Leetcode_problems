class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pdtLeft, pdtRight;
        int pdt =1;
        for(int i=0;i<nums.size();i++){
            pdt = pdt*nums[i];
            pdtLeft.push_back(pdt); 
        }
        int pdtR=1;
        for(int i=nums.size()-1;i>=0;i--){
            pdtR = pdtR*nums[i];
            pdtRight.push_back(pdtR); 
        }
        reverse(pdtRight.begin(),pdtRight.end());
        
        nums[0] = pdtRight[1];
        for(int i=1;i<nums.size()-1;i++){
            nums[i] = pdtLeft[i-1] * pdtRight[i+1];
        }
        nums[nums.size()-1] = pdtLeft[nums.size()-2];
        
        return nums;
    }
};