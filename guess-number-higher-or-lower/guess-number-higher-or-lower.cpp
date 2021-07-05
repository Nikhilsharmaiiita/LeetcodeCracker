class Solution {
public:
    int guessNumber(int n) {
        int lo=0,hi=n;
        int mid;
        while(lo<=hi)
        {
                mid=lo+(hi-lo)/2;
                if(guess(mid)==1)lo=mid+1;
                else if(guess(mid)==-1)hi=mid-1;
                else return mid;
        }
        return mid;
    }
};