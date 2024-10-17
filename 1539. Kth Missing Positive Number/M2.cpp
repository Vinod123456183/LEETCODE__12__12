class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int n=arr.size();

        int i = 0;

        int C = 1;

        while(i < n and k > 0 )  {

            if(arr[i] == C) {
                i++;
                C++;
            }else{
                k--;
                C++;
            }

        }
        if(k) {
            while(k--) {
                C++;
            }
        }
        return C-1;

    }
};
