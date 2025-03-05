# 1780. Check if Number is a Sum of Powers of Three

## Solution: Base 3 conversion

### Let's write 12 in base 3:

$(12)_{10} = (110)_3$

$1*10^1 + 2*10^0  = 1*3^2 + 1*3^1 + 0*3^0$

### Now, 21 in base 3:

$(21)_{10} = (210)_3$

$2*10^1 + 1*10^0  = 2*3^2 + 1*3^1 + 0*3^0$

Notice that n = 21 written in base 3 has a digit of 2, which is not the case for n = 12. The problem boils down to checking if a number has the digit 2 in base 3.

## Time/Memory Complexity

> Given an integer $n$
>
> Time complexity: O($log_3n$), since $log_3n$ equals the amount of function calls
> 
> Memory complexity: O($log_3n$), since $log_3n$ equals the recursion stack size