class Solution {
public:
    vector<string> digit_to_string;
    void fun_map()
    {
        digit_to_string.resize(10);
        digit_to_string[2]="abc";
        digit_to_string[3]="def";
        digit_to_string[4]="ghi";
        digit_to_string[5]="jkl";
         digit_to_string[6]="mno";
         digit_to_string[7]="pqrs";
         digit_to_string[8]="tuv";
         digit_to_string[9]="wxyz";
    }
    void f(string &digits,int start,string &cont,vector<string> &res)
    {
        //base case
        if(start==digits.size())
        {
            res.push_back(cont);
            return;
        }
        for(int i=0;i<digit_to_string[digits[start]-'0'].size();i++)
        {
            cont.push_back(digit_to_string[digits[start]-'0'][i]);
            f(digits,start+1,cont,res);
            cont.pop_back();
        }
    }
    
        vector<string> letterCombinations(string digits) {
        vector<string> res;
            if(digits.size()==0)return {};
        string cont;
        fun_map();
        f(digits,0,cont,res);
        return res;
        
    }
};