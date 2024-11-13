class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
          vector<int>ans;
          for(int i = 0 ; i < spells.size(); i++) {
            // note 4 2 4 ans req but we getting 4 8 10 so put inside here 
            int c = 0;
            for(int j = 0; j < potions.size(); j++) {
              // note wheneveer we will see multply sign then is req to caste it and overflow will always come in that case
                long long P = (long long)spells[i] * potions[j];
                if(P>=success) {
                    c++;
                }
            }
            ans.push_back(c);
          }
          return ans; 
    }
};
