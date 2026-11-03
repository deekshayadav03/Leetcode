class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t) return true;
        return false;
    //    map<char, int>mp;
    //    for (auto st:s){
    //     mp[st]++;
    //    }
    //     map<char, int>mp1;
    //     for (auto st:t){
    //     mp1[st]++;
    //    }
    //   for (auto c:s){
    //     if (mp[c]!=mp1[c]) return false;
    //   }
    //   return true;
    }
};