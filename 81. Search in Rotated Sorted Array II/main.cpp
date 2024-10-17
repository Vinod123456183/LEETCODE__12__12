class Solution {
public:
    // Function to find the pivot (minimum element index)
    int Pivot(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = n - 1;

        while (l < r) {
          // same in most of the function [1 1 2 1 1 ] 
          // Skip duplicates on the left
            while (l < r && nums[l] == nums[l + 1]) 
                l++;
            // Skip duplicates on the right
            while (l < r && nums[r] == nums[r - 1]) 
                r--;
          
            int m = (l + r) / 2;

            // Determine which half to search
            if (nums[m] < nums[r]) {
                r = m; // The pivot is in the left half
            } else {
                l = m + 1; // The pivot is in the right half
            }
        }
        return l; // Return the pivot index
    }

    // Binary search function
    int BS(int l, int r, vector<int>& nums, int k) {
        while (l <= r) {
            int m = (l + r) / 2;
            if (nums[m] == k) {
                return m; // Target found
            } else if (nums[m] > k) {
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        return -1; // Target not found
    }

    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        if (n == 0) return false; // Handle empty array case

        int P = Pivot(nums); // Find the pivot index

        // Perform binary search in the appropriate halves
        return BS(P, n - 1, nums, target) != -1 || BS(0, P - 1, nums, target) != -1;

      /*
      if (BS(P, n - 1, nums, target) != -1) {
            return true; // Target found in the right half
        } else if (BS(0, P - 1, nums, target) != -1) {
            return true; // Target found in the left half
        } else {
            return false; // Target not found
        }
      */
    }
};
