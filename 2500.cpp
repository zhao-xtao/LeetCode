class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        for (int i = 0; i < n; i++) {
            sort(grid[i].begin(), grid[i].end(), greater<int>());
        }
        int sum = 0;
        for (int j = 0; j < m; j++) {
            int m_max = 0;
            for (int i = 0; i < n; i++) {
                m_max = max(m_max, grid[i][j]);
            }
            sum += m_max;
        }
        return sum;
    }
};
