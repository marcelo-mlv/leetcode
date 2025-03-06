# 2965. Find Missing and Repeated Values

## Solution: Frequency array

Let $n$ be the order of the input matrix.

With an $n^2$ sized array we can store the frequency which each number appear on the matrix. Let `freq` be said vector, being initialized as an array of zeroes.

> It goes without saying that TS sh*t cannot be solved without extra memory.

Now we iterate over the matrix for `i`.

If, while iterating, a value in `freq` already equals $1$, just push `i` to the answer vector `ans`.

At the end, iterate over `freq` again for `i`.

When `freq[x] = 0` is found, push $x$ to ans.

> This solution is O($n^2$) both time and memory wise, where $n$ is the order of the input matrix. 

## Quick note

It's worth mentioning that we can optimize our algorithm if `freq` has size $n^2 + 1$ while implementing.

Instead of incrementing `freq[i - 1]`, for $i = 1, 2, 3, ...$, it's faster if we increment `freq[i]` for $i = 1, 2, 3, ...$, and don't touch `freq[0]` at all.

```
for(auto row : grid) {
    for(auto i : row) {
        if(freq[i])
            ans[0] = i;
        freq[i]++;
    }
}
```

Is faster than

```
for(auto row : grid) {
    for(auto i : row) {
        if(freq[i-1])
            ans[0] = i;
        freq[i-1]++;
    }
}
```

Because instead of incrementing `i` and using `i-1` twice, it just uses `i` right off the bat for each iteration.

> It only consumes 1 more byte for a big optimization time-wise.
