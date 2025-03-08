class Solution {
    public:
        int minimumRecolors(string blocks, int k) {
            int ans = -1;
            int minBlack = INT_MAX;
            int maxIndex = blocks.size()-k+1;
            for(int i = 0; i < maxIndex; i++) {
                int minBlackLocal = 0;
                for(int j = i; j < k+i; j++)
                    if(blocks[j] == 'W')
                        minBlackLocal++;
                if(minBlackLocal < minBlack)
                    minBlack = minBlackLocal;
            }
            return minBlack;
        }
};
