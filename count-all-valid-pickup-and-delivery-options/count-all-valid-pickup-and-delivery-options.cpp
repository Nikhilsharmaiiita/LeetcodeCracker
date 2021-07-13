class Solution {
public:
    int countOrders(int n) {
        int res=1;
        if(n==1)return res;
        for(long int i=2;i<=n;i++)
            res=(res*i*(2*i-1))%(1000000007);
        return res;
    }
};