class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
               nums[i]=nums[i]+nums[i-1];
            
        }
        return nums;
    }
};
/*
==================================================
Problem: LC 1480  -  Running sum of 1D array

Difficulty: Easy

Topic: Arrays

Pattern: Brute Force

Time Complexity: O(n)

Space Complexity: O(1)

Status: Solved

Revision:
R1:
R2:
R3:

What I Learned:
- Brute force approach

Date:
25 July 2026
==================================================
*/
