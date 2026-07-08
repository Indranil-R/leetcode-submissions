class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int st = 1;
        int end = *(max_element(piles.begin(), piles.end()));
        while (st <= end) {
            int m = st + (end - st) / 2;
            long long hoursTaken = 0;
            for (int val : piles) {
                hoursTaken += ((long long)val + m - 1) / m;
            }

            if (hoursTaken <= h) {
                end = m - 1;
            } else {
                st = m + 1;
            }
        }
        return st;
    }
};