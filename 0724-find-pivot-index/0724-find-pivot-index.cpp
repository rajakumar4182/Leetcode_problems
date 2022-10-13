class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int PivotIdx=-1;
        int sumL=0,sumR=0;
        vector<int> L,R; 
        for(int i=0;i<nums.size();i++){
            sumL += nums[i];
            L.push_back(sumL);
        }
        for(int i=nums.size()-1;i>=0;i--){
            sumR += nums[i];
            R.push_back(sumR);
        }
        reverse(R.begin(),R.end());
        // cout<<R[1]<<""<<R[2]<<" "<<R[3]<<endl;
        // cout<<L[0]<<""<<L[2]<<" "<<L[3]<<endl;
        for(int i=0;i<L.size();i++){
            if(L[i] == R[i]){
                // cout<<L[i]<<" "<<R[i]<<endl;
                PivotIdx = i;
                break;
            }
        }
        return PivotIdx;
    }
};