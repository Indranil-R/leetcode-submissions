class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int count = 0;
        for (int &i : nums)
        {
            if (i == val)
            {
                i = 60;
                count++;
            }
        }
        sort(nums.begin(), nums.end());
        return nums.size() - count;
    }
};