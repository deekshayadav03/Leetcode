class Solution {
public:
vector<string >ans;
unordered_set<string>st;
void dfs(string &s, int i, int l, int r,int lr, int rr, string cur){
    if(i== s.size()){
        if(l==r&&lr==0&&rr==0) st.insert(cur);
        return;
    }
    if(s[i]=='('){
        if(lr>0)
        dfs(s,i+1,l,r,lr-1,rr,cur);
        dfs(s,i+1,l+1,r,lr,rr,cur+'(');
    }
    else if(s[i]==')'){
        if(rr>0) dfs(s,i+1,l,r,lr,rr-1,cur);
        if(l>r) dfs(s,i+1,l,r+1,lr,rr,cur+')');
    }
    else 
    dfs(s,i+1,l,r,lr,rr,cur+s[i]);
}
    vector<string> removeInvalidParentheses(string s) {
       int lr=0, rr=0;
       for (char c:s){
        if(c=='(') lr++;
        else if(c==')'){
            if(lr>0) lr--;
            else
            rr++;
        }
       }
       dfs(s,0,0,0,lr,rr,"");
       return vector<string>(st.begin(),st.end());
    }
};