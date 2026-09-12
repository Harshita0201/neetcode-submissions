class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp; //ele->freq
        for(int i=0; i<nums.size(); i++){
             mp[nums[i]]++; 
        }
        vector<vector<int>> bucket(nums.size()+1); //bucket[freq]=ele
        for(auto &i:mp){
            int ele=i.first;
            int freq=i.second;

            bucket[freq].push_back(ele);
        }
        vector<int> ans;
        for(int i=nums.size(); i>=1 && ans.size()<k; i--){ //start from highest freq
              for(auto num:bucket[i]){
                ans.push_back(num);
                if(ans.size()==k) break;
              }
        }
        return ans;
    }
};
