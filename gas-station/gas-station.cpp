class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int fule=0;
        int i=0;
        int j=0;
        //forword trip.....
        while(i<n)
        {
            if(fule+gas[i]>=cost[i])
            {
                fule+=(gas[i]-cost[i]);
                i++;
            }
            else
            {
                fule=0;
                i++;
                j=i;
            }
        }
        //if its imposible then reeturn -1
        if(j==n)return -1;
        
        for(int i=0;i<j;i++)
        {
            if(fule+gas[i]>=cost[i])
            {
                fule+=(gas[i]-cost[i]);
            }
            else
            {
                return -1;
            }
        }
        return j;
    }
};