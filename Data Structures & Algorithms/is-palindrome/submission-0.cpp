class Solution {
public:
    bool isPalindrome(string s) {
        string filter;
        for(char c:s){
            if(isalnum(c)){
                filter += tolower(c);
            }
        }
        int i=0,j=filter.size()-1;

        while(i<j){
            if(filter[i]!=filter[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};