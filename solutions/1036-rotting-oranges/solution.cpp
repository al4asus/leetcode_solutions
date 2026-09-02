class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        queue<pair<int, int>> q;

        int freshCount = 0;

        for(int r = 0; r < rows; r++){
            for(int c = 0; c < cols; c++){
                if(grid[r][c] == 2){
                    q.push ({r, c});
                }
                else if(grid[r][c] == 1){
                    freshCount++;
                }
            }
        }
        int minutes = 0;

        vector<pair<int, int>> dirs = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

        while(freshCount > 0 && !q.empty()){

            int levelSize = q.size();

            for (int i=0; i < levelSize; i++){
                int currR = q.front().first;
                int currC = q.front().second;
                q.pop();

                for (auto dir: dirs){
                    int nextR = currR + dir.first;
                    int nextC = currC + dir.second;

                    if(nextR >= 0 && nextR < rows && nextC >= 0 && nextC < cols && grid[nextR][nextC] == 1){
                        grid[nextR][nextC] = 2;
                        freshCount--;
                        q.push({nextR, nextC});
                    }
                }
            }
            minutes++;
        }
        return freshCount == 0 ? minutes : -1;
    }
};
