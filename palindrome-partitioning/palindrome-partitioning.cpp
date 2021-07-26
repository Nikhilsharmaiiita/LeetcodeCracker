class Solution {
public:
    bool ispalindrom(string &s)
    {
        int start=0;
        int end=s.size()-1;
        while(start<=end)
        {
            if(s[start]!=s[end])return false;
            start++;
            end--;
        }
        return true;
    }
    
    void fun(vector<vector<string>> &res,vector<string>  &cont,string &s,int start)
   {
        int n=s.size(); 
        //base case
        
        if(start>=n)
        {
            res.push_back(cont);
            return;
        }
        
        //recursive step
        string part;
        for(int i=start;i<n;i++)
        {
         part=s.substr(start,i-start+1);
         if(!ispalindrom(part))continue;
         cont.push_back(part);
         fun(res,cont,s,i+1);
         cont.pop_back();
        }
        
    }
    vector<vector<string>> partition(string s) {
       vector<vector<string>> res;
        vector<string> cont;
        fun(res,cont,s,0);
        return res;
    }
};