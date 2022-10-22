class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // BY modifying array TC = O(n) && SC = O(1)
//         for(int i=0;i<nums.size();i++){
//             int index = abs(nums[i]);
            
//             if(nums[index] < 0) return index;
//             nums[index] = -nums[index];
//         }
//         return -1;
        
        // using circle in linkedlist
        
        int slow = nums[0];
        int fast = nums[0];
        
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast);
        
        fast = nums[0];
        
        while(slow!=fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        
        return fast;
            
            
    }
};