class Solution {
public:
   bool ispalindrom(string s,int start,int end)
    {
        while(start<end)
        {
            if(s[start]!=s[end])return false;
            start++;
            end--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int left=0,right=s.size()-1;
        while(left<right)
        {
            if(s[left]!=s[right])
            {
                return ispalindrom(s,left+1,right) || ispalindrom(s,left,right-1);
            }
            left++;
            right--;
        }
        return true;
    }
};