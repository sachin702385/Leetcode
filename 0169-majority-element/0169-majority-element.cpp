class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // lets use voting system
        int vote=0;
        int candidate=98765;
        for(int x:nums){
            if(vote==0){
              candidate=x;  
            }
            if(x==candidate){
                vote++;
            }else{
                vote--;
            }     
        }
        return candidate;    
    }
};