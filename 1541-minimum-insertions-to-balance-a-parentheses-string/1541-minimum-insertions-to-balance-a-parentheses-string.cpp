class Solution {
public:
    int minInsertions(string s) {
        stack<char>st;
        int cnt=0;
        int cons=0;
        for (int i =0;i<s.length();i++){
              if(s[i]=='('){
                st.push(s[i]);
             }
             else {
                if(i+1<s.length()&&s[i+1]==')'){
                    i++;
                    if(!st.empty()) st.pop();
                    else
                    cnt++;
                }
                    else{
                        cnt++;
                        if(!st.empty()) st.pop();
                        else
                        cnt++;
                    }
                }
             }
        
        cnt +=2*st.size();
        return cnt;
    }
};