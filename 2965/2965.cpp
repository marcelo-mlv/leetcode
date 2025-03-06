class Solution {
    public:
        vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
            vector<int> ans (2, 0);
            int n = grid.size();
            long long size = n*n;
            vector<int> freq (size+1, 0);
            for(auto row : grid) {
                for(auto i : row) {
                    if(freq[i])
                        ans[0] = i;
                    freq[i]++;
                }
            }
            for(int i = 1; i <= size; i++) {
                if(!freq[i]) {
                    ans[1] = i;
                    break;
                }
            }
            return ans;
        }
};
