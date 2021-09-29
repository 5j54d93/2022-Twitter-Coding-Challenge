# FizzBuzz

Give a number _n_, for each integer _i_ in the range from _1_ to _n_ inclusive, print one value per line as follows：

- If _i_ is a multiple of both _3_ and _5_, print _FizzBuzz_.
- If _i_ is a multiple of both _3_（but not _5_）, print _Fizz_.
- If _i_ is a multiple of both _5_（but not _3_）, print _Buzz_.
- If _i_ is not a multiple of _3_ or _5_, print the value of _i_.

## Fuction Description

Complete the function _fizzBuzz_ in the editor below.

_fizzBuzz_ has the following parameter(s)：  
&emsp;&emsp;_int n_：upper limit of values to test（inclusive）  
&emsp;&emsp;Returns：NONE  
&emsp;&emsp;Prints：The function must print the appropriate response for each value _i_ int the set _{1,2, ... n}_ in ascending order, each on a separate line.

## Constraints

- 0 < n < 2 × 10⁵

## Sample Case 0

### Sample Input

```
STDIN     Function
-----     --------
15     →  n = 15
```

### Sample Output

```
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
```

### Explanation

The numbers _3, 6, 9,_ and _12_ are multiples of _3_（but not _5_）, so print _Fizz_ on those lines.  
The numbers _5_ and _10_ are multiples of _5_（but not _3_）, so print _Buzz_ on those lines.  
The number _15_ is a multiple of both _3_ and _5_, so print _FizzBuzz_ on that line.  
None of the other values is a multiple of either _3_ or _5_, so print the value of _i_ on those lines.
