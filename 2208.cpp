class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<double> q(nums.begin(), nums.end());
        double sum1 = 0, sum2 = 0;
        for (auto num : nums) sum1 += num;
        int res = 0;
        while(sum2 < sum1 / 2) {
            double num = q.top();
            q.pop();
            sum2 += num / 2;
            q.push(num / 2);
            res++;
        }
        return res;
    }
};
