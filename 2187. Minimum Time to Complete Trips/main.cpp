class Solution {
public:

    bool Possible(long long m , int totalTrips , vector<int>&time) {
        long long ans = 0;
        for(auto it : time) {
            ans += m/it;
        }

        return ans >= totalTrips;

    }

    long long minimumTime(vector<int>& time, int totalTrips) {
        
        long long l = 1;
        long long r = (long long) *min_element(time.begin(),time.end())*totalTrips;

        while(l<r){
            long long m = l+(r-l)/2;

            if(Possible(m,totalTrips,time)){
                r=m;
            }
            else{
                l=m+1;
            }
        }

        return l;

    }
};
