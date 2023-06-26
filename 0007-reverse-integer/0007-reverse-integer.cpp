class Solution {
public:
    int reverse(int x) {
        long int n = x;
        long sum = 0;
        if( n < 0)
        {
            n = n * -1;
        }
        while(n > 0)
        {
            int rem = n % 10;
            sum = sum * 10 + rem;
            n = n / 10;
        }
        if(sum > INT_MAX)
        {
            sum = 0;
            return sum;
        }
        if(x < 0)
        {
            return (-1 * sum);
        }
        else
        {
            return sum;
        }
    }
};