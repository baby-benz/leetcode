# 567. Permutation in String

https://leetcode.com/problems/permutation-in-string/

## Description

Given two strings __s1__ and __s2__, return __true__ if __s2__ contains a permutation of __s1__, or __false__ otherwise.

In other words, return __true__ if one of __s1__'s permutations is the substring of __s2__.


## Example 1:

    Input: s1 = "ab", s2 = "eidbaooo"
    Output: true
    Explanation: s2 contains one permutation of s1 ("ba").


## Example 2:

    Input: s1 = "ab", s2 = "eidboaoo"
    Output: false


## Constraints:

- 1 <= s1.length, s2.length <= 10<sup>4</sup>
- __s1__ and __s2__ consist of lowercase English letters.