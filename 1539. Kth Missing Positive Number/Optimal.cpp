class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int l = 0;
        int r = n-1;
        
        while(l<=r) { // 1234 k=2 

            int m =(l+r)/2;

            // Checking how many no missing if less go right because more no are there
            if(arr[m] - (m+1) < k) {
                l=m+1;
            }else{
                r=m-1;
            }
        }

        // l k left side + k missing nos
        return k+l;

    }
};
