class Solution {
public:
    string frequencySort(string s) {
          map<char, int>mp;
        priority_queue<pair<int, char>>pq;
        for (auto c:s){
            mp[c]++;
        }
        for (auto it:mp){
            pq.push({it.second, it.first});
        }
        string ans;
        while(!pq.empty()){
            pair<int, char>curr= pq.top();
            pq.pop();
            for (int i =0; i<curr.first; i++){
                ans+=curr.second;
            }
        }
        return ans;
    }
};