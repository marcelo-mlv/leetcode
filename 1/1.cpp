class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        for(int i = 0; i < size-1; i++) {
            int partial = target-nums[i];
            for(int j = i+1; j < size; j++) {
                if(nums[j] == partial)
                    return {i, j};
            }
        }
        return {0};
    }
};
