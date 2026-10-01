class Solution {
public:
    bool isValid(string s) {
        if(s.length()==0) return true;
        if (s[0]==')'||s[0]=='}'||s[0]==']') return false;
         stack<int>st;
         st.push(s[0]);
         for (int i =1; i<s.length(); i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                st.push(s[i]);
            }
            else {
                if(st.empty()) return false;
                char ch = st.top();
                 if((s[i]==')'&&ch=='(')||(s[i]=='}'&&ch=='{')||(s[i]==']'&&ch=='[')){
                    st.pop();
                 }
                 else 
                 return false;
            }
         }
       
         return st.empty();

    }
};