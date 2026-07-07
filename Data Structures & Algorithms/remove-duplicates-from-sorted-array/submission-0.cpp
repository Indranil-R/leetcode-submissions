    class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int i=0,j=0;
        int u=nums[0];

        while(j<nums.size()){
            if(u!=nums[j]){
                u=nums[j];
                i++;
            }
            nums[i]=nums[j];
            j++;
        }
        return i+1;
        }
    };