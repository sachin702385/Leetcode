class Solution {
public:
    void solve(vector<char>& s, int start, int end){
        
    }
    void reverseString(vector<char>& s) {
        int left=0;
        int right=s.size()-1;
        while(left<right){
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};