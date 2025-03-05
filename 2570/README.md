# 2570. Merge Two 2D Arrays by Summing Values

## Solution: Merge Sort Analogy

### Similarly:

1. There are two identical vectors
2. There are two indexes pointing to the start of each vector
3. Iteration happens by pushing the number pointed by one of the indexes to the answer vector, in this case based from `id`

Iteration happens until both indexes reach each vector's end.

## Time/Memory Complexity

> This solution is efficient with a time complexity of O($n + m$), where $n$ and $m$ are the lengths of `nums1` and `nums2` respectively. It also uses O($n + m$) extra space for the result.
