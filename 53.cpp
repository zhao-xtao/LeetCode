class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0], t = 0;
        for (auto num : nums) {
            t = max(t + num, num);
            ans = max(ans, t);
        }
        return ans;
    }
};
