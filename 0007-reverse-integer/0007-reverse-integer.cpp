class Solution {
public:
    int reverse(int x) {
        int rev=0;
       while(x!=0){
        int dgt=x%10;
         if(rev>INT_MAX/10||(rev==INT_MAX && dgt>7)) return 0;
         if(rev<INT_MIN/10||(rev==INT_MIN && dgt<-8)) return 0;
        rev=(rev*10)+dgt;
         x=x/10;
       }
        return rev;
    }
};