class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        int x=1;
        for(int i=0;i<32;i++)
        {
            int mask=1<<i;
            if(mask&n)count++;
        }
        return count;
    }
};