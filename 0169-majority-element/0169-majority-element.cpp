class Solution {
public:
    int majorityElement(vector<int>& nums) {

        //------------Gives Run time error----------
        // sort(nums.begin(),nums.end());
        // int count1=1;
        // int countMaxEl = INT_MIN,MajorEl;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i] == nums[i+1]){
        //         count1++;
        //         // ccountMaxEl = max(MajorEl,count1);
        //         if(countMaxEl < count1){
        //             countMaxEl = count1;
        //             MajorEl = nums[i];
        //         }
        //     }
        //     else{
        //         count1 =1;
        //     }
        // }
        // return MajorEl;
        
        
        // Boyer–Moore majority vote algorithm O(N), O(1)
        int vote =0,leader=0;
        for(int i=0;i<nums.size();i++){
            if(vote == 0) leader = nums[i];
            if(leader == nums[i]) vote++;
            else vote--;
        }
        return leader;
    }
};