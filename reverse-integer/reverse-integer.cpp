class Solution {
public:
    int reverse(int x) {
        int sign=1;
        if(x<0)sign=-1;
        
       int num=abs(x);
       int res=0;
        
        while(num>0)
        {
            if(res>INT_MAX/10)return 0;
            res=res*10+(num%10);
            num=(int)num/10;
        }
        return res*sign;
    }
};