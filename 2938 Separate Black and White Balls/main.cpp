// intutiion - count black balls and if white ball apperase these will no of swaps because usse phle koi bhi black nahi hoga  







class Solution {
public:
    long long minimumSteps(string s) {

        long long ans = 0;

        int Black = 0;

        for(int i = 0 ; i < s.size(); i++)  {

            if(s[i] == '1'){
                Black++;
            }
            else{
                ans += Black;
            }

        }
        return ans;
    }
};
