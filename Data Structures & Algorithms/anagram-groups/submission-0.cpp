class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> vec;
        unordered_map<string,vector<string>> map;
        
        for(string s:strs){
            string c = s;
            sort(c.begin(),c.end());
            map[c].push_back(s);
        }

        for(auto &p:map){
            vec.push_back(p.second);
        }

        return vec;
    }
};