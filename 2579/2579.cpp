class Solution {
    public:
        long long coloredCells(int n) {
            long long x = n;
            return 2*x*(x - 1) + 1;
        }
};
