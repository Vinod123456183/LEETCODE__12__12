class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        vector<int>temp;

        int n = arr.size();

        int C = 1;

        int i = 0;

        // filling only k missing no in temp so space = O(K) 
        
        while(temp.size() < k)  { 

            if(i < n and arr[i] == C) {

                i++;
                
                C++;

            }else {
                // pushing that are not in arr 
              
                temp.push_back(C);

                C++;

            }

        }
        return temp[k-1];
    }
};
