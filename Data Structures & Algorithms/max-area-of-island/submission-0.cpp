class Solution {
public:
    void dfs(vector<vector<int>>& grid, int i, int j, int& tempLength){
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] != 1){
            return;
        }

        tempLength++;
        grid[i][j] = 2;

        dfs(grid, i+1, j, tempLength);
         dfs(grid, i, j+1, tempLength);
          dfs(grid, i-1, j, tempLength);
           dfs(grid, i, j-1, tempLength);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int length = 0;

        for(int row = 0; row < n; row++){
            for(int col = 0; col < m; col++){
                if(grid[row][col] == 1){
                    int tempLength = 0;
                    dfs(grid, row, col, tempLength);
                    length = max(length, tempLength);
                }
            }
        }
        return length;
    }
};
