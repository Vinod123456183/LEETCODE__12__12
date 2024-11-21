class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i= 0;
        int j = 1;
        while(i < nums.size() and j <  nums.size() )  {
            
          if(nums[i]%2==0) {
                i += 2;    
            }
            else if(nums[i]%2==1) {
                swap(nums[i],nums[j]);
              // i+=2 nahi krna 
                j += 2;
            }

        }
        return nums;
    }
};
