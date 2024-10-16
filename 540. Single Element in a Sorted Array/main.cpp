class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0 ;

        int high = nums.size()-1;

        int ans = 0 ;
        int  n = nums.size();
        
        if(n == 1) return nums[0];
        
        if(nums[0] != nums[1]) return nums[0];
        
        if(nums[n-1] != nums[n-2]) return nums[n-1];

        
      while(low < high)  {

            int mid = (low+high)/2;

            if( mid % 2 == 1 and  nums[mid] == nums[mid-1])
            {
                ans = nums[mid];
                low = mid+1;
            }
            else if( mid % 2 == 0 and  nums[mid] == nums[mid+1])
            {
                ans = nums[mid];
                low = mid+1;
            }
            
            else if(nums[mid] != nums[mid-1] and nums[mid]!= nums[mid+1]) {
                return  nums[mid];
            }
            
            else 
                high=mid;
            

        } 
    
        return ans;

    }
};
