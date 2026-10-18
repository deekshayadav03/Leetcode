class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.length();i++){
            if(haystack[i]==needle[0]){
                int l =i+1;
                int j =1;
                while(j<needle.length()){
                   if(haystack[l]!=needle[j]){
                       break;
                   }
                   j++;
                   l++;
                }
                if(j==needle.length()) return i;
            }
        }
        return -1;
    }
};