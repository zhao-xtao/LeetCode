class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        int max_x = max(a, max(b, c));
        int min_x = min(a, min(b, c));
        int mid_x = a + b + c - max_x - min_x;
        int min_ans = 0, max_ans = max_x - mid_x + mid_x - min_x - 2;
        if ((max_x - mid_x == 1) && (mid_x - min_x == 1)) min_ans = 0;
        else if (max_x - mid_x <= 2 || mid_x - min_x <= 2) min_ans = 1;
        else min_ans = 2;
        return {min_ans, max_ans};
    }
};
