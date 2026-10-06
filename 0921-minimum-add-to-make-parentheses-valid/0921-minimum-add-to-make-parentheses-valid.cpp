class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int>st;
        int count=0;
        for(int i =0; i<s.length(); i++){
       if(st.empty()){
        st.push(s[i]);
        continue;
       }
       char top= st.top();
       if(s[i]=='('){
        st.push(s[i]);
       }
       else{
       if(s[i]==')'&&top=='(') st.pop();
       else 
       count++;
       }
        }
        if(!st.empty()) 
            count+=st.size();
        return count;
    }
};