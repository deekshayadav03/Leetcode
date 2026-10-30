class Solution {
public:
    int maxVowels(string s, int k) {
        int ans=INT_MIN;
        int cnt=0;
        int st=0;
        int n =s.length();
        for (int i =0;i<n;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') cnt++;
            if(i>=k-1){
                ans= max(ans,cnt);
                if(s[st]=='a'||s[st]=='e'||s[st]=='i'||s[st]=='o'||s[st]=='u') cnt--;
                st++;
            }
        }
        return ans;
    }
};