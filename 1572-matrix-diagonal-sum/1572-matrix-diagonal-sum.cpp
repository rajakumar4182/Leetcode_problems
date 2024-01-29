class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int sum =0;
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(i==j){
                    sum += mat[i][j];
                }
                if(j== m-i-1){
                    sum += mat[i][j];
                }
            }
        }
        if(n %2==0){
            return sum;
        }
        else{
            sum -= mat[n/2][n/2];
            return sum;
        }
    }
};