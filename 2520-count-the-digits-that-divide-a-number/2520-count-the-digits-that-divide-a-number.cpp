class Solution {
public:
    int countDigits(int num) {
        int val = num;
        int cnt = 0;
        while(val > 0)
        {
            int temp = val % 10;
            if(num % temp == 0)     cnt++;
            val = val / 10;
        }
        return cnt;
    }
};