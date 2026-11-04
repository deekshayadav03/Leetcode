class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        //  sort(nums.begin(), nums.end());
        //  for (int i =0; i<nums.size(); i++){
        //     if (nums[i]==nums[i+1])
        //     return true;
        //  }
        //  return false;

    unordered_map<int, int>mp;
        for (int i =0; i<nums.size(); i++){
            if(mp[nums[i]]==1) return true;
            mp[nums[i]]++;
        }
        return false;
    }
};