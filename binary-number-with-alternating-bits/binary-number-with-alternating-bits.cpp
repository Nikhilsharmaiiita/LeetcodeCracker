class Solution {
public:
    bool hasAlternatingBits(int x) {
        long long n=x;
        return !((n ^= n/2) & n+1);
    }
};