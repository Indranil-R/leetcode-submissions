class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;

        for (int n : nums) {
            m[n]++;
        }

        vector<pair<int, int>> arr(m.begin(), m.end());

        sort(arr.begin(), arr.end(),
             [](const pair<int, int>& a, const pair<int, int>& b) { return a.second > b.second; });

        nums.erase(nums.begin() + k, nums.end());
        for (int i = 0; i < k; i++) {
            nums[i] = arr[i].first;
        }
        return nums;
    }
};