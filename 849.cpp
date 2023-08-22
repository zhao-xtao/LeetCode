class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int l = 0, n = seats.size(), res = 0;
        while(l < n && seats[l] == 0) l++;
        res = max(res, l);
        while(l < n) {
            int r = l + 1;
            while(r < n && seats[r] == 0) r++;
            if (r == n) res = max(res, r - l - 1);
            else res = max(res, (r - l) / 2);
            l = r;
        }
        return res;
    }
};
