class Solution {
public:
    bool isPerfectSquare(int num) {
      long long lo=1,hi=num,mid;
        while(lo<hi)
        {
            mid=lo+(hi-lo+1)/2;
                if(mid*mid<=num)lo=mid;
            else hi=mid-1;
        }
        if(lo*lo==num)return true;
        return false;
    }
};