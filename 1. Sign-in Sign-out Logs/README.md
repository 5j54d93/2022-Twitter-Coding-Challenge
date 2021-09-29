# 1. Sign-in Sign-out Logs

Application logs are used in analysis of interactions with an application and may beused to detect specific actions.

A log file is provided as a string array where each entry is in the form "_user_id timestamp action_".  
Each of the values is separated by a space.

- Both _user_id_ and timestamp consist only of digits, are at most 9 digits long and start with a non-zero digit.
- _timestamp_ represents the time in seconds since the application was last launched
- action will be either "sign-in" or "sign-out"

Given a log with entries in no particular order, return an array of strings that denote _user_id_'s of users who signed out in _maxSpan_ seconds or less after signing in.

## Example

_n = 7  
logs = ["30 99 sign-in", "30 105 sign-out", "12 100 sign-in", "20 80 sign-in", "12 120 sign-out", "20 101 sign-out", "21 110 sign-in"]  
maxSpan = 20_

```
ID  Sign in  Sign out  Time delta
--  -------  --------  ----------
30  99       105       6
12  100      120       20
20  80       101       21
21  110
```

The users with id's 30 and 12 were not signed in for more than _maxSpan_ = 20 seconds. In sorted numerical order, the return array is _["12", "30"]_.

## Function Description

Complete the function _processLogs_ in the editor below.

The function has the following parameter(s):
&emsp;&emsp;string _logs[n]_：each _logs[i]_ denotes the ith entry in the logs  
&emsp;&emsp;_int maxSpan_：the maximum difference in seconds between when a user logs in and logs out for the user to be included in the result  
Returns:  
&emsp;&emsp;_string[]_：a string array of user id's, sorted ascending by numeric value

## Constraints

- 1 ≤ _n, maxSpan_ ≤ 10⁵
- 1 ≤ _maxSpan_ ≤ n
- Each _user_id_ contains only characters in the range ascii['0'-'9'], is at most _9_ digits long and starts with a non-zero digit.
- Each _timestamp_ contains only characters in the range ascii['0'-'9'] and begins with a non-zero digit
- 0 < _timestamp_ ≤ 10⁹
- Each _action_ is either "sign-in" or "sign-out".
- Each _user_id_'s _sign-in timestamp < sign-out timestamp_
- Each user signs in for only 1 session.
- The result will contain at least one element.

## Input Format Format for Custom Testing

Input from stdin will be processed as follows and passed to the function.

The first line contains an integer, _n_, the size of _logs_.  
Each of the next _n_ lines contains a log file entry, _logs[i]_.  
The last line contains a single integer,maxSpan.

## Sample Case 0

### Sample Input

```
STDIN              Function
-----              --------
6               →  logs[] size n = 6
99 1 sign-in    →  logs = ["99 1 sign-in","100 10 sign-in","50 20 sign-in","100 15 sign-out","50 26 sign-out","99 2 sign-out"]
100 10 sign-in
50 20 sign-in
100 15 sign-out
50 26 sign-out
99 2 sign-out
5                →  maxSpan = 5
```

### Sample Output

```
99
100
```

### Explanation

```
ID   Sign in  Sign out  Time delta
--   -------  --------  ----------
50   20       26        6
99   1        2         1
100  10       15        5
```

The users with id's 99 and 100 were not signed in for more than _maxSpan = 5_ seconds. In sorted numerical order, the return array is _["99", "100"]_.

## Sample Case 1

### Sample Input

```
STDIN              Function
-----              --------
4               →  logs[] size n = 4
60 12 sign-in   →  logs = ["60 12 sign-in","80 20 sign-out","10 20 sign-in","60 20 sign-out"]
80 20 sign-out
10 20 sign-in
60 20 sign-out
100             →  maxSpan = 100
```

### Sample Output

```
60
```

### Explanation

```
ID  Sign in  Sign out  Time delta
--  -------  --------  ----------
10  20
60  12       20        8
80  20
```

Only user id _60_ has signed out and was not signed in for more than _maxSpan = 100_ seconds. The return array is _["60"]_.
