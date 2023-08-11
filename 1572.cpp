class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum = 0;
        for (int i = 0, j = n - 1; i < n; i++, j--) sum += mat[i][i] + mat[i][j];
        if (n & 1) sum -= mat[n / 2][n / 2];
        return sum;
    }
};
