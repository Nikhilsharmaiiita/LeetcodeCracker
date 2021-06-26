class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1,j=b.size()-1;
        int carry=0;
        string ans="";
         int first,second;
        while(i>=0 && j>=0)
        {
            first=a[i]=='1'?1:0;
            second=b[j]=='1'?1:0;
            int sum=first^second^carry;
            ans +=to_string(sum);
            carry=first&second | second&carry | first&carry;
            i--;
            j--;
        }
        
            while(j>=0){
            first=0;
            second=b[j]=='1'?1:0;
            int sum=first^second^carry;
            ans +=to_string(sum);
            carry=first&second | second&carry | first&carry;
            j--;}
        
            while(i>=0){
            first=0;
            second=a[i]=='1'?1:0;
            int sum=first^second^carry;
            ans +=to_string(sum);
            carry=first&second | second&carry | first&carry;
            i--;}
        
        if(carry==1)ans+=to_string(carry);
        i=0,j=ans.size()-1;
        while(i<=j)
        {
            swap(ans[i],ans[j]);
            i++;
            j--;
        }
        return ans;
    }
};