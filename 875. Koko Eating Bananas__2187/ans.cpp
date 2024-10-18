class Solution {
public:

    // Important

    bool CanEat(vector<int>&piles , int h , int m) {
        int ans = 0;

        for(auto it : piles) {
            ans += (it + m - 1) / m;
        }
        return ans <= h;

    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int l = 1;
        int r = *max_element(piles.begin(),piles.end());
        
        while(l<r) {
            int m = (l+r)/2;
            if(CanEat(piles,h,m)) {
                r=m; 
            }else{
                l=m+1;
            }
        }
        return l;

    }
};
