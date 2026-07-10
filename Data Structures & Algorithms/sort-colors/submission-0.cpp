class Solution {
public:
    void sortColors(vector<int>& nums) { mergeSort(nums, 0, nums.size() - 1); }
    void mergeSort(vector<int>& a, int s, int e) {
        if (s < e) {
            int m = s + (e - s) / 2;
            mergeSort(a, s, m);
            mergeSort(a, m + 1, e);
            merge(a, s, m, e);
        }
    }
    void merge(vector<int>& a, int st, int mid, int end) {
        int i = st;
        int j = mid + 1;
        vector<int> t;
        while (i <= mid && j <= end) {
            if (a[i] <= a[j]) {
                t.push_back(a[i]);
                i++;
            } else {
                t.push_back(a[j]);
                j++;
            }
        }
        while (i <= mid) {
            t.push_back(a[i]);
            i++;
        }
        while (j <= end) {
            t.push_back(a[j]);
            j++;
        }

        for (i = 0; i < t.size(); i++) {
            a[i + st] = t[i];
        }
    }
};