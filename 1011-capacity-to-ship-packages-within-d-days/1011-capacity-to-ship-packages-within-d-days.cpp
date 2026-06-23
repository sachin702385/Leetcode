class Solution {
public:
    bool isvalid(vector<int>& weights, int days, int maxcap){
        int rd=1; //required days
        int currload=0;
        for(int currWt : weights){   
           
            if(currload + currWt <= maxcap){
                currload+=currWt;
            }else{
                rd++;
                currload=0;
                currload += currWt;
            }
            if(rd > days){
                return false;
            }
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);  //accumulate for sum of element
        int ans=high;
        while(low <= high){
            int mid = low+(high - low) / 2;
            if(isvalid(weights, days, mid)== true){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
        
    }
};