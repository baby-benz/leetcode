#include <iostream>

class Solution {
public:
    static bool isPowerOfTwo(const int n) {
        return n > 0 && !(n & n - 1);
    }
};

int main() {
    std::cout << Solution::isPowerOfTwo(16) << std::endl;
    return 0;
}
