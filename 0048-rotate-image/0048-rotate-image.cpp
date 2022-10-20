class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int i=0,j=n-1,k=0;
        
        while(i<(n/2) && j >=(n/2)){
            for(int k=0;k<n;k++){
                swap(matrix[i][k],matrix[j][k]);
            }
            i++;
            j--;
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
    }
};