class Solution {
public:
    int repeatedStringMatch(string a, string b) {
     int Na=a.size(),Nb=b.size();
     //b--> pattern so we find out LPS for this pattern 
     //a--> text repeated some number of time 
            int i,j;
    //LPS Array
            vector<int> LPS(Nb,0);
            for(int i=1;i<Nb;i++)
            {
            j=LPS[i-1];
            while(j>0 && b[j]!=b[i])
            j=LPS[j-1];
            if(b[j]==b[i])LPS[i]=j+1;
            }
    //KMP Algo
        i=0,j=0;
        int length=Na*((Nb/Na) + 2);
        while(i<length)
        {
            while(j<Nb && i<length && a[i%Na]==b[j])
            {
                i++;j++;
            }cout<<j<<" ";
            if(j==Nb)return ceil(i/(Na*1.0));
            if(j==0)i++;
            else j=LPS[j-1];
        }
        return -1;
    }
};