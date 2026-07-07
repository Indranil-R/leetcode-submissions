class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int s = min(word1.length(), word2.length());
         for(int i=0;i<s;i++){
            ans+=word1[i];
            ans+=word2[i];
         }
        ans.append(word1,s,word1.length()-s);
        ans.append(word2,s,word2.length()-s);
        return ans;
    }
};