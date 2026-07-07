class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int lp = 0, rp = numbers.size() - 1;
        vector<int> vec;
        for (int i = 0; i < numbers.size() ; i++) {
            
            if (numbers[lp] + numbers[rp] == target) {
                vec.push_back(lp+1);
                vec.push_back(rp+1);
                return vec;
            }
            if (numbers[lp] + numbers[rp] > target) {
                rp--;
            } else {
                lp++;
            }
        }
        return vec;
    }
};