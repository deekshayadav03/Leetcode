class Solution {
public:
    int minInsertions(string s) {
        stack<char>st;
        int ans=0;
        for (int i =0;i<s.length();i++){
            if(s[i]=='(') st.push(s[i]);
            else {
                if(i+1<s.length()&&s[i+1]==')'){
                    i++;
                    if(!st.empty()) st.pop();
                    else
                    ans++;
                }
                else{
                    ans++;
                   if(!st.empty()) st.pop();
                    else
                    ans++;
                }
            }
        }
        ans+=2*st.size();
        return ans;
    }
};