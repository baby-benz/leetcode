#include <iostream>

class Solution {
public:
    static unsigned int tribonacci(int n) {
        if (n < 2) {
            return n;
        }

        unsigned int num1 = 0;
        unsigned int num2 = 0;
        unsigned int num3 = 1;
        unsigned int result = 1;

        for (unsigned int i = 1; i < n; i++) {
            result = num1 + num2 + num3;
            num1 = num2;
            num2 = num3;
            num3 = result;
        }

        return result;
    }
};

int main() {
    std::cout << Solution::tribonacci(2) << std::endl;
    return 0;
}
