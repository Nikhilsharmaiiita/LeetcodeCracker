class Solution {
public:
    int trailingZeroes(int n) {
        int count=0;
        int x=5;
        while(n/x)
        {count+=n/x;x*=5;}
return count;
    }
};