class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> ans;
        int nums1idx = 0;
        int nums2idx = 0;
        while(true) {
            if(nums1idx == nums1.size()) {
                while(nums2idx < nums2.size()) {
                    ans.push_back(nums2[nums2idx]);
                    nums2idx++;
                }
                return ans;
            }
            else if(nums2idx == nums2.size()) {
                while(nums1idx < nums1.size()) {
                    ans.push_back(nums1[nums1idx]);
                    nums1idx++;
                }
                return ans;
            }
            else if(nums1[nums1idx][0] < nums2[nums2idx][0]) {
                ans.push_back(nums1[nums1idx]);
                nums1idx++;
            }
            else if(nums2[nums2idx][0] < nums1[nums1idx][0]) {
                ans.push_back(nums2[nums2idx]);
                nums2idx++;
            }
            else if(nums1[nums1idx][0] == nums2[nums2idx][0]) {
                ans.push_back({nums1[nums1idx][0], nums1[nums1idx][1] + nums2[nums2idx][1]});
                nums1idx++;
                nums2idx++;
            }
        }
    }
};
