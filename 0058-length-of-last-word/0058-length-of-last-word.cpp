class Solution {
public:
    int lengthOfLastWord(string s) {
       int cnt=0;
       int n=s.length();
       int prev;
       for(int i=0;i<n;i++){
         if(s[i]==' '){
            if(cnt!=0)
            prev=cnt;
            cnt=0;
            continue;
        }

        cnt++;
       } 
       if(cnt!=0)
       return cnt;
       else
       return prev;
    }
};