class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0;
        int r=numbers.size()-1;
        vector<int> ans;
        while(l<r){
            int tar=numbers[l]+numbers[r];
            if(tar<target) l++;
            else if(tar>target) r--;
            else if(tar==target) {
                return {l+1,r+1};
            }
        }
        return {};
    }
};
