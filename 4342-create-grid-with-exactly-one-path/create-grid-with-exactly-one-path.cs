public class Solution {
    public string[] CreateGrid(int m, int n) {
        string[] grid = new string[m];

        for (int i = 0; i < m; i++)
        {
            char[] row = new char[n];

            for (int j = 0; j < n; j++)
            {
                row[j] = '#';
            }

            grid[i] = new string(row);
        }

        // Make the first row free
        char[] firstRow = grid[0].ToCharArray();

        for (int j = 0; j < n; j++)
        {
            firstRow[j] = '.';
        }

        grid[0] = new string(firstRow);

        // Make the last column free
        for (int i = 1; i < m; i++)
        {
            char[] row = grid[i].ToCharArray();
            row[n - 1] = '.';
            grid[i] = new string(row);
        }

        return grid;
    }
}