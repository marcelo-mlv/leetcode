# 3191. Find Missing and Repeated Values

## Solution: Sliding Window

### Explanation:

The solution uses a Divide-and-Conquer algorithm in order to use the minimum amount of bit flipping operations.

This algorithm consists in checking if the first index of an array is already `1`. If so, we divide our vector because we don't need to check the first index anymore, so our sub-array equals the original vector without its first index.

In this sub-array, we apply the same logic recursively. If the first index happens to equal `0`, we flip the first 3 indices of the sub-array.

This approach allows us to deterministically find the least amount of bit flipping operations.

The algorithm stops when the `right` index reaches the sub-array's end. There, we check if its three indices are equal to `1`. If that's not the case, the algorithm returns -1.

## Time/Memory Complexity

> This solution has a time complexity of O($n$), where $n$ is the length of the input array. It also uses O(1) extra space, since we only use adimensional variables.
