class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<vector<int>, vector<string>> mp;
        for(auto &s:strs){
            vector<int> frq(26,0);
            for(auto &c:s){
                frq[c-'a']++;
            }
            mp[frq].push_back(s);
        }
        for(auto &it:mp){
            res.push_back(it.second);
        }
        return res;
    }
};
