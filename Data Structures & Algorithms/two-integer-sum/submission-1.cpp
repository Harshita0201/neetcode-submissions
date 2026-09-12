class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]=i;
        }
        vector<int> res;
        for(int i=0; i<nums.size(); i++){
            int ele = target-nums[i];
            if(mp.find(ele)!=mp.end() && mp[ele]!=i){
                res.push_back(i);
                res.push_back(mp[ele]);
                break;
            }
        }
        return res;
    }
};
