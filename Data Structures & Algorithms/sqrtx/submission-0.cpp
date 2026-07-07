class Solution {
public:
    int mySqrt(int x) {
        int st=1,end=x;
        while(st<=end){
            long long m = st + (end -st)/2;
            if(m*m>x) end=m-1;
            if (m*m<x) st=m+1;
            if(m*m==x) return m;
        }
        return end;
    }
};