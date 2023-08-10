class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> pr;
        for (auto j : jewels) pr[j] = 1;
        int sum = 0;
        for (auto s : stones) {
            sum += pr[s];
        }
        return sum;
    }
};
