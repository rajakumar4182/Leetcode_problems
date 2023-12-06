class Solution {
    private:
    void dfs(int row,int col,vector<vector<int>>& vis,vector<vector<int>>& grid,int drow[],int dcol[]){
        vis[row][col] = 1;
        int n = grid.size();
        int m = grid[0].size();
        
        for(int i =0;i<4;i++){
            int nrow = row + drow[i];
            int ncol = col + dcol[i];
            
            if(nrow>=0 && nrow<n && ncol >=0 && ncol <m && !vis[nrow][ncol] && grid[nrow][ncol] == 1){
                dfs(nrow,ncol,vis,grid,drow,dcol);
            }
        }
    }
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        
        int drow[] = {1,0,-1,0};
        int dcol[] = {0,1,0,-1};
        
        for(int i =0;i<m;i++){
            if(!vis[0][i] && grid[0][i] == 1){
                dfs(0,i,vis,grid,drow,dcol);
            }
            if(!vis[n-1][i] && grid[n-1][i]==1){
                dfs(n-1,i,vis,grid,drow,dcol);
            }
        }
        
        for(int i =0;i<n;i++){
            if(!vis[i][0] && grid[i][0] == 1){
                dfs(i,0,vis,grid,drow,dcol);
            }
            if(!vis[i][m-1] && grid[i][m-1] == 1){
                dfs(i,m-1,vis,grid,drow,dcol);
            }
        }
        
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j] == 1){
                    count++;
                }
            }
        }
        return count;
    }
};