class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;//element->1 (present), 0(not present) market
        for(int i=0; i<nums.size(); i++){
            
            if(mp.find(nums[i])!=mp.end()){ //element already present
                return true;
                break;
            }
            //not present, insert into map
            mp[nums[i]]=1;
        }
        return false;
    }
};