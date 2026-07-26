class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       for(int i=0;i<nums.size()-1;i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target){
                return{i,j};
            }
        }
       }
       return {};
    }
};
/*
==================================================
Problem: LC 1 - Two Sum

Difficulty: Easy

Topic: Arrays

Pattern: Brute Force

Time Complexity: O(n²)

Space Complexity: O(1)

Status: Solved

Revision:
R1:
R2:
R3:

What I Learned:
- Brute force approach
- Nested loops
- Need HashMap later for O(n)

Date:
25 July 2026
==================================================
*/
