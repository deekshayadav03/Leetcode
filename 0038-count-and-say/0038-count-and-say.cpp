class Solution {
public:
    string countAndSay(int n) {
       string str="";
        for (int i =0; i<n; i++){
            if(i==0){
                str="1";
            }
            else{
                int count=1;
                    string temp="";
               for(int i =0; i<str.length(); i++){
                   if(str[i]==str[i+1]){
                    count++;
                   }
                   else{
                        temp+=to_string(count);
                        temp+=str[i];   
                               count=1;                   
                   }
                }
                  str=temp;
            }
        }
        return str;
    }
};