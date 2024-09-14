class Solution {
public:
    int maxArea(vector<int>& nums) { 
        int i = 0 ;
        int j = nums.size() - 1;
        int ans = INT_MIN;
        while(i < j)  {

            // Because width will defintly index values

            int Width = abs( j - i ) ;

            // We have taken min height because water will flow from big side 

            int Height = min( nums[i]  , nums[j] );

            // calculating area that it occoupied

            int Area = Width * Height ;

            // storing in ans because we want max no ,
            // if you are new to leetcode u can use vector 
            // and push area in vector and find max from it

            ans = max(ans , Area) ;
          
            // because we want greater one and we want to skip smaller 
          
          if(nums[i] < nums[j])  
                i++;
            else 
                j--;
        }

        return ans;
        
    }
};
