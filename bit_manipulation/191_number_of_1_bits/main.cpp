#include <iostream>

class Solution {
public:
    static unsigned int hammingWeight(uint32_t n) {
        unsigned int ones = 0;
        while (n > 0) {
            ones += n & 1;
            n >>= 1;
        }
        return ones;
    }
};

int main() {
    std::cout << Solution::hammingWeight(11) << std::endl;
    return 0;
}
