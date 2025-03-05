# 2579. Count Total Number of Colored Cells

## Solution: Simple recursion

Let f($n$) be the number of colored cells at the end of $n$ minutes.

Notice that $f(n) = 4*(n-1) + f(n-1)$.

Using recursion, we notice that, given $f(1) = 1$ as base case:

$f(n) = 4*(n-1) + 4*(n-2) + 4*(n-3) + ... + 4*2 + 4*1 + 1$

$f(n) = 1 + 4*\frac{n*(n-1)}{2}$

$f(n) = 1 + 2*n*(n-1)$

> This solution is quite efficient, since it returns the formula right away, being of constant complexity both time and memory-wise.
