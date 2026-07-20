class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int num) {
        int m = grid.size();
        int n = grid[0].size();
        int mul = m * n;

        num = num % mul;
        for (int i = 0; i < num; i++) {

            int lastElement = grid[m - 1][n - 1];

            for (int j = m - 1; j >= 0; j--) {
                for (int k = n - 1; k >= 0; k--) {
                    if (j == 0 && k == 0){
                        break;
                    }

                    if (k > 0) {
                        grid[j][k] = grid[j][k - 1];
                    } else {
                        grid[j][k] = grid[j - 1][n - 1];
                    }
                }
            }
            grid[0][0] = lastElement;
        }

        return grid;
    }
};