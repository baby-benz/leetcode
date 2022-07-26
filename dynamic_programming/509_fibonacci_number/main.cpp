#include <iostream>

class Solution {
public:
    static unsigned int fib(const unsigned int n) {
        if (n < 1) {
            return n;
        }

        unsigned int prevStep = 0;
        unsigned int curStep = 1;
        unsigned int result = 1;

        for (unsigned int i = 1; i < n; i++) {
            result = curStep + prevStep;
            prevStep = curStep;
            curStep = result;
        }

        return result;
    }
};

int main() {
    std::cout << Solution::fib(4) << std::endl;
    return 0;
}
