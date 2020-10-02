class Solution {
public:
    string countAndSay(int n) {
        string ans = "1";
        int count=1;
        while(--n)
        {
            string temp;
            for(int i=0;i<ans.length();i++)
            {
                while(i+1<ans.length() && ans[i+1]==ans[i]) count++,i++;
                temp+=to_string(count);
                temp+=ans[i];
                count=1;
            }
            ans=temp;
        }
        return ans;
    }
};