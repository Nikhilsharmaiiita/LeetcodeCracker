class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        arr.push_back(50000);
        int lo=0,hi=n-k,mid;
        while(lo<hi)
        {
            mid=lo+(hi-lo)/2;
                if(x-arr[mid]<=arr[mid+k]-x)
                    hi=mid;
            else
                lo=mid+1;
        }
        vector<int> res(arr.begin()+lo,arr.begin()+lo+k);
        return res;
    }
};