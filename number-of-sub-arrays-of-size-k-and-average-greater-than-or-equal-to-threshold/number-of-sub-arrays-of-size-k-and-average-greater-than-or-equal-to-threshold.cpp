class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
       int n = arr.size();
        long long sum =0;
        int i =0;
        int j = 0;
        int count =0;
        while(j<n)
        { 
            sum+=arr[j];
            int avg = sum/k;
            if(j-i+1<k)
            {
                j++;
            }
           else if(j-i+1 >= k)
            {
              sum-=arr[i];
                i++;
                j++; 
            
            if(avg>=threshold)
                count++;}
        }
        return count; 
    }
};