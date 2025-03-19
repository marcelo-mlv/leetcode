# 1. Two Sum

## Solution: Brute Force

### Explanation:

The solution uses a brute force approach to find two numbers that add up to a target value. Here are the steps:

1. Iterate through the input array `nums` with index `i`.
2. For each number at index `i`, iterate through the remaining numbers with index `j`.
3. Check if the sum of the numbers at indices `i` and `j` equals the target:
   - If it does, return the indices `i` and `j`.
4. If no such pair is found, return an empty vector.

This approach ensures that all possible pairs are checked.

## Time/Memory Complexity

> This solution has a time complexity of O($n^2$), where $n$ is the length of the input array `nums`. It uses O(1) extra space.
