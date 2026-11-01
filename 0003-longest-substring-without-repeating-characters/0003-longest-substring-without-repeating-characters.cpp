class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
     int left=0;
     int maxlen=0;
     unordered_set<char>st;
       for (int i =0;i<n;i++){
        while(st.count(s[i])){
            st.erase(s[left]);
            left++;
        }
        st.insert(s[i]);
        maxlen=max(maxlen,i-left+1);
       }
       return maxlen;
    }
};