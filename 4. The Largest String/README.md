# 4. The Largest String

Given a string, construct a new string by rearranging the original string and deleting characters as needed. Return the alphabetically largest string that can be constructed respecting a limit as to how many consecutive characters can be the same.

## Example

_s = 'baccc'_  
_k = 2_

The largest string, alphabetically, is '_cccba_' but it is not allowed because it uses the character '_c_' more than 2 times consecutively. Therefore, the answer is '_ccbca_'.

## Function Description

Complete the function _getLargestString_ in the editor below.

getLargestString has the following parameters：  
&emsp;&emsp;string _s[n]_：the original string  
&emsp;&emsp;int _k_：the maximum number of identical consecutive characters the new string can have

Returns：  
&emsp;&emsp;_string_：the alphabetically largest string that can be constructed that has no more than _k_ identical consecutive characters

## Constraints

- 1 ≤ n ≤ 10⁵
- 1 ≤ k ≤ 10³
- The string _s_ contains only lowercase English letters.

## Input Format For Custom Testing

The first line contains a string, _s_.  
The second line contains an integer, _k_.

## Sample Case 0

### Sample Input

```
STDIN      Function
-----      --------
zzzazz  →  string s = 'zzzazz'
2       →  k=2
```

### Sample Output

```
zzazz
```

### Explanation

One '_z_' must be removed so that no more than 2 consecutive characters are the same.

## Sample Case 1

### Sample Input

```
STDIN      Function
-----      --------
axxzzx  →  s = 'axxzzx'
2       →  k = 2
```

### Sample Output

```
zzxxax
```

### Explanation

The character '_a_' must separate the 3 '_x_' characters so that no more than 2 consecutive characters are the same.
