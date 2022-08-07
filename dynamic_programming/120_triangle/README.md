# 120. Triangle

https://leetcode.com/problems/triangle/

## Description

Given a __triangle__ array, return the minimum path sum from top to bottom.

For each step, you may move to an adjacent number of the row below. More formally, if you are on index __i__ on the current row, you may move to either index __i__ or index __i + 1__ on the next row.

## Example 1:

    Input: triangle = [[2],[3,4],[6,5,7],[4,1,8,3]]
    Output: 11
    Explanation: The triangle looks like:
       2
      3 4
     6 5 7
    4 1 8 3
    The minimum path sum from top to bottom is 2 + 3 + 5 + 1 = 11.

## Example 2:

    Input: triangle = [[-10]]
    Output: -10

## Constraints:

- 1 <= triangle.length <= 200 
- triangle[0].length == 1 
- triangle[i].length == triangle[i - 1].length + 1 
- -10<sup>4</sup> <= triangle[i][j] <= 10<sup>4</sup>