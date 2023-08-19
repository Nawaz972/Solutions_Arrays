class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)   return false;
        int n = x;
        long int num = 0;
        while(n > 0)
        {
            num = num * 10 + n % 10;
            n /= 10;
        }
        if(x == num)    return true;
        else    return false;
    }
};