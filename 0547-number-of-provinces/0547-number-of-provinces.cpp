class Solution {
    private:
    void dfs(int node,vector<int> adjls[],int vis[]){
        vis[node] = 1;
        for(auto it: adjls[node]){
            if(!vis[it]){
                dfs(it,adjls,vis);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        const int N = 444;
        vector<int> adjls[N]; //adjaceny list
        for(int i =0;i<n;i++){
            for(int j =0;j<n;j++){
                if(isConnected[i][j] == 1 && i!=j){
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                }
            }
        }
        int vis[N] ={0};
        int count =0;
        for(int i =0;i<n;i++){
            if(!vis[i]){
                dfs(i,adjls,vis);
                count++;
            }
        }
        return count;
    }
};