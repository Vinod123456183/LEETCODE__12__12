
class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        int ans = 0;
        int head = 0;
        int tail = 0;
        unordered_map<char, int> mp;

        for (; head < s.size(); head++) {
            mp[s[head]]++;
            while ( mp[s[head]] == k ) { // >=
                ans += (s.size() - head);
                mp[s[tail]]--;             
                tail++;
            }
        }
        return ans;
    }
};
