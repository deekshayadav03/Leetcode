class Solution {
public:
    bool isHappy(int n) {
        if(n==1) return true;
       unordered_map<int, bool>vis;
        while(n!=1){
            long long sqr=0;
            while(n>0){
                int val = n%10;
                sqr+= val*val;
                n=n/10;
            }
            n= sqr;
           if(vis[n]==true) return false;
           vis[n]=true;

        }
        return true;
    }
};