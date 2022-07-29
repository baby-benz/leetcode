#include <iostream>
#include <vector>

class Solution {
public:
    static unsigned int rob(const std::vector<int> &nums) {
        if (nums.size() == 1) {
            return nums[0];
        }

        unsigned int prev = 0, cur = 0;

        for (int num : nums) {
            unsigned int tmp = cur;
            cur = std::max(prev + num, cur);
            prev = tmp;
        }

        return cur;
    }
};

int main() {
    std::cout << Solution::rob({2, 7, 9, 3, 1}) << std::endl;
    return 0;
}
