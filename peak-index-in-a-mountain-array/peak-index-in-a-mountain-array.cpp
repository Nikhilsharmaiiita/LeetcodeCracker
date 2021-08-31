class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
     //arr[mid]<=arr[mid+1]
     //TTTTTTFFFFF
     //find first false
     int lo=0,hi=arr.size()-1;
     int mid;
     while(lo<hi)
     {
         mid=lo+(hi-lo)/2;
         if(arr[mid]<=arr[mid+1])
         lo+=1;
         else
         hi=mid;
     }
     return hi;
    }
};