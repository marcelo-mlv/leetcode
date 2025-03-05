# 2161. Partition Array According to Given Pivot

## Solution: Create extra vectors

### Let's create three variables:

1. A vector that contains all elements greater than pivot
2. A vector that contains all elements smaller than pivot
3. An int that counts the number of pivots in the original vector

Push all elements to one of the two vectors accordingly and generate answer vector with all elements preserving relative order.

## Time/Memory Complexity

> It may not be the best solution memory wise, but at least it is O($n$) time-wise.
>
> There may be another solution O(1) in memory but O($n^2$) in time.
