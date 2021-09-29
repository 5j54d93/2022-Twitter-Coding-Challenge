# 2. How many Sentences？

Given an array of words and an array of sentences, determine which words are anagrams of each other. Calculate how many sentences can be created by replacing any word with one of its anagrams.

## Example

_wordSet = ['listen', 'silent', 'it', 'is']_  
_sentence = 'listen it is silent'_

Determine that _listen_ is an anagram of _silent_. Those two words can be replaced with their anagrams. The four sentences that can be created are：

- listen it is silent
- listen it is listen
- silent it is silent
- silent it is listen

## Function Description

Complete the _countSentences_ function in the editor below.

countSentences has the following parameters：  
&emsp;&emsp;_string wordSet[n]_：an array of strings  
&emsp;&emsp;_string sentences[m]_：an array of strings

Returns：  
&emsp;&emsp;_int[]_：an array of _m_ integers that denote the number of sentences that can be formed from each sentence

## Constraints

- 0 < n ≤ 10⁵
- 1 ≤ length of each word ≤ 20
- 1 ≤ m ≤ 1000
- 3 ≤ words in a sentence ≤ 20

## Input Format For Custom Testing

Input from stdin will be processed and passed to the function as follows：

The first line contains an integer _n_ denoting the number of elements in _wordSet[]_.  
Each of the next _n_ lines contains a string _wordSet[i]_.  
The next line contains an integer _m_ denoting the number of elements in _sentences[]_.  
Each of the next _m_ lines contains a string _sentences[i]_ made up of a number of words separated by spaces.

## Sample Case 0

### Sample Input

```
STDIN            Function
-----            --------
6             →  wordSet[] size n = 6
the           →  wordSet = ['the', 'bats', 'tabs', 'in', 'cat', 'act']
bats
tabs
in
cat
act
3             →  sentences[] size m = 3
cat the bats  →  sentences = ['cat the bats', 'in the act', ‘act tabs in']
in the act
act tabs in
```

### Sample Output

```
4
2
4
```

### Explanation

_Sentence 1_：For the sentence _'cat the bats'_, the sentences that can be formed are：

- cat the bats
- act the bats
- cat the tabs
- act the tabs

_Sentence 2_：For the sentence _'in the act'_, the sentences that can be formed are：

- in the act
- in the cat

_Sentence 3_：For the sentence _'act tabs in'_, the sentences that can be formed are：

- act tabs in
- cat tabs in
- act bats in
- cat bats in

Therefore, the integer array returned is [4, 2, 4].
