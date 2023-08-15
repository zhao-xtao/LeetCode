class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        int res = 0;
        map<vector<int>, int> cnt;
        for (auto g : grid) cnt[g]++;
        for (int i = 0; i < n; i++) {
            vector<int> row;
            for (int j = 0; j < n; j++) row.push_back(grid[j][i]);
            res += cnt[row];
        }
        return res;
    }
};
