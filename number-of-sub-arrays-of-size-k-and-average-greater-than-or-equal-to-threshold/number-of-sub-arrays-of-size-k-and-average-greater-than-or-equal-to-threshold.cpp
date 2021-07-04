class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        long long sum=0;
        int j=0; int count=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
            if(i>=k-1)
            {
                if(sum/k>=threshold)count++;
                sum-=arr[j++];
            }
        }
        return count;
    }
};