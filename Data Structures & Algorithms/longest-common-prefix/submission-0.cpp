class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string prefix = "";
       sort(strs.begin(),strs.end());
       for(int i=0;i<strs[0].length();i++){
            for(int j=1;j<strs.size();j++){
                if(strs[0][i]!=strs[j][i]) return prefix;
            }
            prefix += strs[0][i];
       } 
       return prefix;

    }
};