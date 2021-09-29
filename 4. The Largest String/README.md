# 4. The Largest String

Given a string, construct a new string by rearranging the original string and deleting characters
as needed. Return the alphabetically largest string that can be constructed respecting a limit as to
how many consecutive characters can be the same.
Example
S = 'baccc'
k=2
The largest string, alphabetically, is 'cccba’' but it is not allowed because it uses the character 'c
more than 2 times consecutively. Therefore, the answer is 'ccbca’.
Function Description
Complete the function getLargestString in the editor below.
getLargestString has the following parameters:
string sf[nj: the original string
int k: the maximum number of identical consecutive characters the new string can have
Returns:
string. the alphabetically largest string that can be constructed that has no more than k identical
consecutive characters
Constraints
e 1<n<10°
¢ 1<ks103
e The string s contains only lowercase English letters.
> Input Format For Custom Testing
v Sample Case 0
Sample Input
STDIN Function
