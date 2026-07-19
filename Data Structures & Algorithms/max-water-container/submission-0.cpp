class Solution {
   public:
    int maxArea(vector<int>& h) {
        int l = 0, r = h.size()-1, area = 0;
        while (l < r) {
            area = max(area, min(h[l], h[r]) * (r - l));
            if (h[l] < h[r])
                l++;
            else
                r--;
        }
        return area;
    }
};
