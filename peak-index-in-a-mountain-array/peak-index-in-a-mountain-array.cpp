class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int lo=0,hi=arr.size()-1,mid;
        //px: arr[mid-1]<arr[mid] TTTTTFFFFFF --> T*F* 
        //find last true
        while(lo<hi)
        {
            mid=lo+(hi-lo+1)/2;
                if(arr[mid-1]<arr[mid])lo=mid;
            else hi=mid-1;
        }
        return lo;
    }
};