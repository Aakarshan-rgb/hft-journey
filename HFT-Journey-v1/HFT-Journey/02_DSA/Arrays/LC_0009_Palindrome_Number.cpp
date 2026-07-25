class Solution {
public:
    bool isPalindrome(int x) {
       int rev=0;
       long long num=0;
       int original=x;
       if(x<0){
        return false;
       }
       while(x!=0){
           rev=x%10;
           num=num*10+rev;
           x=x/10;
       }
        if(num==original){
            return true;
        }
        return false;
    }
};
/*
==================================================
Problem: LC 9 - PAlindrome numbers

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
- long long for big data input

Date:
25 July 2026
==================================================
*/
