class Solution {
public:
    int firstBadVersion(int n) {
        int lo=0,hi=n;
        int mid;
        while(lo<hi)
        {
            mid=lo+(hi-lo)/2;
            if(isBadVersion(mid))hi=mid;
            else lo=mid+1;
        }
        return hi;
    }
};