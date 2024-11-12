class Solution {
public:
    int maxPower(string s) {
        int ans = 0;
        int l = 1;

        for(int i = 1; i<s.size(); i++) {
            if(s[i] == s[i-1] )  {
                l++;
                ans = max(ans , l);
            }else{
                l = 1;
                ans = max(ans , l);
            }
        }
        return max(ans , l);
    }
};
