class Solution {
public:
    int reverse(int n) {
    int sum1 = 0;
        while (n != 0) {
            if (sum1 > INT_MAX / 10 || sum1 < INT_MIN / 10)
                return 0;
            sum1 = sum1 * 10 + n % 10;
            n = n / 10;
        }
        return sum1;
    }
};
