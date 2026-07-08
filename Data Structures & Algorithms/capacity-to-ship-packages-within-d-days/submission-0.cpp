class Solution {
public:
    int shipWithinDays(vector<int>& v, int days) {
        int st = *max_element(v.begin(),v.end());
        int end = accumulate(v.begin(), v.end(), 0LL);
        
        while(st<=end){
            long long m = st + (end-st)/2;
            int d = 1,cw=0;
            for(int w:v){
                if(cw+w>m){
                    d++;
                    cw=0;
                }
                cw+=w;
            }
            if(d>days){
                st=m+1;
            }else{
                end=m-1;
            }
        }
        return st;
    }
};