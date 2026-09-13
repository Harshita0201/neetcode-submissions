class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(int i=0; i<nums.size(); i++){
            st.insert(nums[i]);
        }
        int longest=1;
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                int x=it;
                int cnt=1;
                while(st.find(x+1)!=st.end()){
                    cnt=cnt+1;
                    x=x+1;
                }
                longest=max(cnt, longest);
            }
        }
        return longest;
    }
};
