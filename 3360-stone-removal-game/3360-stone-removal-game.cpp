class Solution {
public:
    bool canAliceWin(int n) {
        int a=10;
        int cnt=1;
        while(n>=0){
          if(cnt%2!=0){
            if(n<a) return false;
            n=n-a;
            a--;
          }
          else{
            if(n<a) return true;;
            n=n-a;
            a--;
          }
          cnt++;
        }
        return true;
    }
};