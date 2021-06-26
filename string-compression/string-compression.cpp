class Solution {
public:
    int compress(vector<char>& chars) {
        int j=0;
        for(int i=0;i<chars.size();i++)
        {
            int count=1;
            int x=chars[i];
            while(i+1<chars.size() && x==chars[i+1]){i++;count++;}
            chars[j++]=x;
            if(count>1)
            {
                string val=to_string(count);
                int val_size=val.size();
                int k=0;
                while(val_size--)
                {
                    chars[j++]=val[k++];
                }
            }
        }
        return j;
    }
};