class Solution {
    public:
        int floorSqrt(unsigned int n) {
            int lo = 1;
            int hi = n;
            int res = 1;
            while(lo <= hi) {
                long mid = lo + (hi - lo)/2;
                if(mid*mid <= n) {
                    res = mid;
                    lo = mid + 1;
                }
                else hi = mid - 1;
            }
            return res;
        }
        bool isPrime(int n) {
            if(n < 2)
                return false;
            int sqrtn = floorSqrt(n);
            for(int i = 2; i <= sqrtn; i++)
                if(n % i == 0)
                    return false;
            return true;
        }
        vector<int> closestPrimes(int left, int right) {
            vector<int> primes;
            for(int i = left; i <= right; i++)
                if(isPrime(i))
                    primes.push_back(i);
            if(primes.size() < 2)
                return {-1, -1};
    
            int smallestGap = primes[1]-primes[0];
            int smallestIdx = 0;
            for(int i = 0; i < primes.size()-1; i++) {
                if(smallestGap > primes[i+1]-primes[i]) {
                    smallestGap = primes[i+1]-primes[i];
                    smallestIdx = i;
                }
            }
            return {primes[smallestIdx], primes[smallestIdx+1]};
        }
};
