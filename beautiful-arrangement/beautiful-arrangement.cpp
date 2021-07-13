class Solution {
public:
    void fun(vector<bool> &vis,vector<int> &cont,int &count,int n,int start)
    {
        //base case
        if(cont.size()==n)
        {
            count++;
            return;
        }
        
        //rec step
        for(int i=1;i<=n;i++)
        {
            if(!vis[i] && (start%i==0 || i%start==0))
            {
                vis[i]=true;
                cont.push_back(i);
                fun(vis,cont,count,n,start+1);
                vis[i]=false;
                cont.pop_back();
            }
        }
    }
    int countArrangement(int n) {
        vector<int> cont;
        vector<bool> vis(n+1,false);
        int count=0;
        fun(vis,cont,count,n,1);
        return count;
    }
};