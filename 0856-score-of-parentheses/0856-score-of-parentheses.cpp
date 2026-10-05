class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        st.push(0);
        for (int i =0; i<s.length(); i++){
            if(s[i]=='('){
                st.push(0);
            }
            else {
                int top= st.top();
                st.pop();
                if(top==0){
                    st.top()+=1;
                }
                else{
                    int score=2*top;
                    st.top()+=score;
                }
            }
        }
        return st.top();
    }
};