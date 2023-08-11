class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int pr = matrix[i - 1][j];
                if (j > 0) pr = min(pr, matrix[i - 1][j - 1]);
                if (j < n - 1) pr = min(pr, matrix[i - 1][j + 1]);
                matrix[i][j] = pr + matrix[i][j];
            }
        }
        int ans = matrix[n - 1][0];
        for (int i = 0; i < n; i++) ans = min(ans, matrix[n - 1][i]);
        return ans;
    }
};
