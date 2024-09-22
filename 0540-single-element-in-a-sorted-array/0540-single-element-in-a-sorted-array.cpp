class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       int n = nums.size();
        int i =0;
        int j = n-1;
        int mid = i+(j-i)/2;
        while(i<j){
            
            if(mid%2==0){
                if(mid-1>=0 && (nums[mid] == nums[mid-1])){
                    j =mid;
                }
                else if(mid+1 <n && (nums[mid] == nums[mid+1])){
                    i = mid+1;
                }
                else{
                    return nums[mid];
                }
            }
            else{
                if(mid-1 >=0 && (nums[mid] == nums[mid-1])){
                    i = mid+1;
                }
                else if(mid+1<n && (nums[mid] == nums[mid+1])){
                    j = mid;
                }
                else{
                    return nums[mid];
                }
            }
            mid = i+(j-i)/2;
        }
        return nums[mid];
    }
};