class Solution {
    public:
        int minOperations(vector<int>& nums) {
            int size = nums.size();
            int left = 0;
            int right = 2;
            int ans = 0;
    
            while(right < size) {
                if(nums[left] == 0) {
                    nums[left] = 1 - nums[left];
                    nums[left+1] = 1 - nums[left+1];
                    nums[right] = 1 - nums[right];
                    ans++;
                }
                left++;
                right++;
            }
            if(nums[left] == 0 || nums[left+1] == 0 || nums[left-1] == 0)
                return -1;
            return ans;
        }
};
