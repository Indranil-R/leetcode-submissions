class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set set(nums.begin(), nums.end());
        if (nums.size() == set.size())
        {
            return false;
        }
        return true;  
    }
};