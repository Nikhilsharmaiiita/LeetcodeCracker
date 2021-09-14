class Solution {
public:
    unordered_map<int,string> mp;
    void insmap()
    {
        mp[0]="";
        mp[1]="";
        mp[2]="abc";
        mp[3]="def";
        mp[4]="ghi";
        mp[5]="jkl";
        mp[6]="mno";
        mp[7]="pqrs";
        mp[8]="tuv";
        mp[9]="wxyz";
    }
    void fun(string &nums,int start,vector<string> &ans,string &cont)
    {
        //base case
        if(cont.size()==nums.size())
        {
            ans.push_back(cont);
            return;
        }
        //rec step
        for(int i=0;i<mp[nums[start]-'0'].size();i++)
        {
            cont.push_back(mp[nums[start]-'0'][i]);
            fun(nums,start+1,ans,cont);
            cont.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.size()==0)return {};
        string cont;
        insmap();
        fun(digits,0,ans,cont);
        return ans;
    }
};