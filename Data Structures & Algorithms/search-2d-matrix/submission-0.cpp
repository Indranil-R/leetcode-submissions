class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s = 0, e = matrix.size() - 1;
        while (s <= e) {
            int m = s + (e - s) / 2;

            if (matrix[m][0] > target) {
                e = m - 1;
            } else if (matrix[m][matrix[m].size() - 1] < target) {
                s = m + 1;
            } else {
                return binarySearch(matrix[m],target);
            }
        }
        return false;
    }
    bool binarySearch(vector<int> v, int target) {
        int s = 0, e = v.size() - 1;
        while (s <= e) {
            int m = s + (e - s) / 2;
            if (v[m] > target) {
                e = m - 1;
            } else if (v[m] < target) {
                s = m + 1;
            } else {
                return true;
            }
        }
        return false;
    }
};