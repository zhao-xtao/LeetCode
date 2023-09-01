class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        if (cost1 < cost2) return waysToBuyPensPencils(total, cost2, cost1);
        long long res = 0, sum1 = 0;
        while(sum1 * cost1 <= total) {
            res += (total - sum1 * cost1) / cost2 + 1;
            sum1 ++;
        }
        return res;
    }
};
