class Solution {
public:

    string encode(vector<string>& strs) {
        string res="";
        for(string &s:strs){
            res+=to_string(s.length())+"#"+s;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i=0;
        while(i<s.length()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int len=stoi(s.substr(i, j-i));

            j++; //skip #

            res.push_back(s.substr(j, len));
            i=j+len;
        }
        return res;
    }
    
};
