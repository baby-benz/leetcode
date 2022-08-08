#include <iostream>

class Solution {
public:
    static uint32_t reverseBits(const uint32_t n) {
        uint32_t reversed = (n >> 16) | (n << 16);
        reversed = ((reversed & 0xff00ff00) >> 8) | ((reversed & 0x00ff00ff) << 8);
        reversed = ((reversed & 0xf0f0f0f0) >> 4) | ((reversed & 0x0f0f0f0f) << 4);
        reversed = ((reversed & 0xcccccccc) >> 2) | ((reversed & 0x33333333) << 2);
        reversed = ((reversed & 0xaaaaaaaa) >> 1) | ((reversed & 0x55555555) << 1);
        return reversed;
    }
};

int main() {
    std::cout << Solution::reverseBits(43261596) << std::endl;
    return 0;
}
