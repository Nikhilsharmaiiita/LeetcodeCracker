class Solution {
public:
    int nthUglyNumber(int n) {
        long long x=1;
        set<long long> s;
        n--;
        while(n--)
        {
            s.insert(x*2);
            s.insert(x*3);
            s.insert(x*5);
            x=*s.begin();
            s.erase(s.begin());
        }
        return x;
    }
};