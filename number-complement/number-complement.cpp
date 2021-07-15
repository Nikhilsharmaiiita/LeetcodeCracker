class Solution {
public:
    int findComplement(int num) {
        int j=0;
        for(int i=0;i<32;i++)
        {
            int mask=1<<i;
            if(mask&num)j=i;
        }
        int ans=0;
        cout<<j;
        for(int i=0;i<=j;i++)
        {
            int mask=1<<i;
            if((mask&num)==0)
            ans+=(pow(2,i));
        }
        return ans;
    }
};