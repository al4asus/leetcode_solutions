class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int adaSayisi = 0;
        int satirSayisi = grid.size();
        int sutunSayisi = grid[0].size();

        for (int r=0; r<satirSayisi; r++){
            for (int c=0; c < sutunSayisi; c++){
                if(grid[r][c] == '1'){
                    adaSayisi++;
                    dfs(grid, r, c);
                }
            }
        }
            return adaSayisi;
        }
        private:
            void dfs(vector<vector<char>>& grid, int r, int c){

                if (r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size() || grid[r][c]== '0'){
                    return;
                }
                grid[r][c]= '0';

                dfs(grid, r+1, c);
                dfs(grid, r-1, c);
                dfs(grid, r, c+1);
                dfs(grid, r, c-1);
            }
};
