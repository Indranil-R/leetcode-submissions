class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }

    // 1st step of merge
    void mergeSort(vector<int>& arr, int st, int end) {
        if (st < end) {
            int mid = st + (end - st) / 2;
            mergeSort(arr, st, mid);
            mergeSort(arr, mid + 1, end);
            merge(arr, st, mid, end);
        }
    }

    // 2nd step of merge
    void merge(vector<int>& arr, int st, int mid, int end) {
        int i = st;
        int j = mid + 1;
        vector<int> temp;

        while (i <= mid && j <= end) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i]);
                i++;
            } else {
                temp.push_back(arr[j]);
                j++;
            }
        }

        while (i <= mid) { // Left hlaf
            temp.push_back(arr[i]);
            i++;
        }
        while (j <= end) { // right half
            temp.push_back(arr[j]);
            j++;
        }

        for (int idx = 0; idx < temp.size(); idx++) {
            arr[idx + st] = temp[idx];
        }
    }
};