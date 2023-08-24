class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                a[i] += grid[i][j];
                b[j] += grid[i][j];
            }
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] != 0 &&  (a[i] > 1 || b[j] > 1)) sum++;
            }
        }
        return sum;
    }
};
