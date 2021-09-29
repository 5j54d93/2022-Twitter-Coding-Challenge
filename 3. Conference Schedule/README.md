# 3. Conference Schedule

A schedule has just been released for an upcoming tech conference. The schedule provides the start and end times of each of the presentations. Once a presentation has begun, no one can enter or leave the room. It takes no time to go from one presentation to another. Determine the maximum number of presentations that can be attended by one person.

## Example

_n = 3  
_scheduleStart = [1, 1, 2]
scheduleEnd = [3, 2, 4]_
Using 0-based indexing, an attendee could attend any presentation alone, or both presentations _1_ and _2_. Presentation _0_ ends too late to be able to attend presentation _2_ afterwards. The maximum number of presentations one person can attend is _2_.

## Function Description

Complete the function _maxPresentations_ in the editor below.

maxPresentations has the following parameter(s)：
&emsp;&emsp;_scheduleStart[n]_：the start times of presentation _i_
&emsp;&emsp;scheduleEnd[n]：the end times of presentation _i_

Returns：  
&emsp;&emsp;_int_：the maximum number of presentations that can be attended by one person

## Constraints

- 1 ≤ n ≤ 10⁵
- 1 ≤ _scheduleStart[i]_, _scheduleEnd[i]_ ≤ 10⁹

## Input Format For Custom Testing

The first line contains an integer, _n_, the number of elements in _scheduleStart[]_.  
Each line _i_ of the _n_ subsequent lines（where _0 ≤ i < n_）contains _an_ integer that describes _scheduleStart[i]_.  
The next line contains an integer, _n_, the number of elements in _scheduleEnd[]_.  
Each line _i_ of the _n_ subsequent lines（where _0 ≤ i < n_）contains an integer that describes _scheduleEnd[i]_.

## Sample Case 0

### Sample Input

```
STDIN     Function
-----     --------
4      →  scheduleStart[] size n = 4
1      →  scheduleStart = [1, 1, 2, 3]
1
2
3
4      →  scheduleEnd[] size n = 4
2      →  scheduleEnd = [2, 3, 3, 4]
3
3
4
```

### Sample Output

```
3
```

### Explanation

An attendee can go to presentations _0_, _2_, and _3_ without conflict. If presentation _1_ is chosen, from time _1_ to _3_, only two presentations can be attended. The maximum number of presentations a single person can attend is _3_.

## Sample Case 1

### Sample Input

```
STDIN     Function
-----     --------
4      →  scheduleStart[] size n = 4
6      →  scheduleStart = [6, 1, 2, 3]
1
2
4
4      →  scheduleEnd[] size n = 4
8      →  scheduleEnd = [8, 9, 4, 7]
9
4
7
```

### Sample Output

```
2
```

### Explanation

An attendee can attend presentation _1_ only as it runs the entire day, or they can instead attend meeting _2_ from _2_ until _4_, then choose to attend either presentation _0_ or _3_. The maximum number of presentations a single person can attend is 2.
