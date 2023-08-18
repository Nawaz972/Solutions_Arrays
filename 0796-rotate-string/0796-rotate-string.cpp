class Solution {
public:
    bool rotateString(string p, string q) {
        if(p.length() != q.length())    return false;
        p += p;
        size_t ans = p.find(q);
        if(ans == -1)   return 0;
        else return 1;
    }
};