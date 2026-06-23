class Solution {
public:
    bool isvalid(vector<int>& piles, int mid, int h){
        int rh=0; //required hour
        for(int NoB : piles){   //NoB number of Banana
            rh += (NoB+mid-1)/mid;
            if(rh > h){
                return false;
            }
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans=high;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (isvalid(piles, mid, h)==true) {
                ans=mid;
                high = mid-1;      // speed kaam kar rahi hai
            } else {
                low = mid + 1;   // speed slow hai
            }
        }

        return ans;
    }
};