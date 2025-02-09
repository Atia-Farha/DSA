class Solution {
public:
    int fib(int n) {
        int num1 = 1, num2 = 1, num3;

        if (n == 1 || n == 2) return 1;
        if (n == 0) return 0;

        for (int i = 1; i < n - 1; ++i) {
            num3 = num1 + num2;
            num1 = num2;
            num2 = num3;
        }

        return num3;
    }
};