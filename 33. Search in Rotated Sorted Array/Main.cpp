class Solution {
public:

    // divided aray in two half and applied bs on both half


    // minimum in rotated sorted array  
    int Pivot(vector<int>&nums) {
        int n=nums.size();
        int l = 0;
        int r = n-1;
        while(l<r){
            int m = (l+r)/2;
            if(nums[m]<nums[r]){
                r=m; //not mid-1 because  4 5 6 1 2 3
                                        //0 1 2 3 4 5
        // arr[mid] will be the maximum  then we do r=mid
            }else
                l=m+1;
        }
        return l; // all lies at same place
    }

    int BS(int l , int r , vector<int>&nums,int k){
        while(l<=r){
            int m=(l+r)/2;
            if(nums[m]==k){
                return m;
            }else if(nums[m]>k){
                r=m-1;
            }else
                l=m+1;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        
        int P = Pivot(nums);
        
        // important edge cases 
        // [1,3] k = 1
        // [2] k = 0
        // [1] k = 1
        // If the array is not rotated, search the whole array
        if (P == 0) return BS(0, nums.size() - 1, nums, target);
        
        // Search in the left half (0 to P-1)
        int ans = BS(0, P - 1, nums, target);
        if (ans != -1) return ans;  // If found, return index
        
        // Search in the right half (P to end)
        return BS(P, nums.size() - 1, nums, target);  // Return the result from right half
        
    }
};
