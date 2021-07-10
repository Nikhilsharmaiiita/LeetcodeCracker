class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool x= n>0 && !(n&(n-1));
        return x;
    }
};