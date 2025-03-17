# 2206. Divide Array Into Equal Pairs

## Solution: Frequency Array

### Explanation:

The solution uses a frequency array to count the occurrences of each number in the input array. Here are the steps:

1. Initialize a frequency array `freq` of size 501 (since the numbers are between 1 and 500) with all elements set to 0.
2. Iterate through the input array `nums` and increment the corresponding index in the frequency array for each number.
3. Iterate through the frequency array and check if each count is even. If any count is odd, return `false`.
4. If all counts are even, return `true`.

This approach ensures that the array can be divided into pairs of equal numbers.

## Time/Memory Complexity

> This solution is efficient with a time complexity of O($n$), where $n$ is the length of the input array `nums`. It also uses O(1) extra space for the frequency array.
