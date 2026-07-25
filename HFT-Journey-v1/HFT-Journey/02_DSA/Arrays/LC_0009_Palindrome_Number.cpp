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
