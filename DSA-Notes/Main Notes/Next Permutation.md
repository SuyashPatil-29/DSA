---
id: Next Permutation
aliases:
  - /home/suyash/Desktop/DSA/3/3.2-medium/next_permutation.cpp
tags:
  - DSA
  - AtoZ
  - ArrMed
area: Algorithms
project: DSA-Notes
---
#### On 14-05-2024 at 21:19

# The Problem Statement

Let's consider an array `vector<int> arr = {2, 1, 3}`. With the numbers present we can have multiple possible combinations but the next permutation is the permutation that comes right after the given array in the dictionary. In this case `{2,3,1}`

## Brute Force Approach

The brute force approach would be to store all the permutations of the number and return the next permutation but here is the catch. The total number of permutations would be `n!` and generating each would take `n` time thus making the total time to be `O(n! * n)`.

## Better Approach

The better approach would be to use the in-built cpp stl function `next_permutation(arr.begin(), arr.end())`

## Optimal Approach

The Optimal Approach is to implement the `next_permutation(arr.begin(), arr.end())` function.

- #### <u>Long pattern matching</u> 
If we look carefully, the next permutation would have the highest matching sequence and where the sequence breaks, we would place a number greater than the breaking point.

- #### <u>Finding the breakpoint</u> 
Breakpoint occurs when `ith` element is smaller then `i+1th` element. Swap the `ith` element with the closest greater element.

- #### <u>Placing the remaining elements</u> 
Rearrange the remaining elements in increasing ascending order and return the newly formed array.

![[Finding the dip.png]]

### Edge Case 
1) If the given array is the last array return the reverse.
