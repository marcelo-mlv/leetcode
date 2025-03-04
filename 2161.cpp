class Solution {
    public:
        vector<int> pivotArray(vector<int>& nums, int pivot) {
            vector<int> less;
            vector<int> greater;
            int numPivot = 0;
            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] < pivot) {
                    less.push_back(nums[i]);
                }
                else if(nums[i] > pivot) {
                    greater.push_back(nums[i]);
                }
                else numPivot++;
            }
            while(numPivot != 0) {
                less.push_back(pivot);
                numPivot--;
            }
            for(int i = 0; i < greater.size(); i++) {
                less.push_back(greater[i]);
            }
            return less;
        }
    };