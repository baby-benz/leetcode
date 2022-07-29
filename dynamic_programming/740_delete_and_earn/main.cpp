#include <iostream>
#include <vector>
#include <array>

class Solution {
public:
    static unsigned int deleteAndEarn(const std::vector<int> &nums) {
        if (nums.size() == 1) {
            return nums[0];
        }

        std::array<unsigned int, 10001> sums{};

        for (int num: nums) {
            sums[num] += num;
        }

        unsigned int prevMax = 0, curMax = 0;

        for (unsigned int sum: sums) {
            unsigned int tmp = curMax;
            curMax = std::max(prevMax + sum, curMax);
            prevMax = tmp;
        }

        return curMax;
    }
};

int main() {
    std::cout << Solution::deleteAndEarn({2, 2, 3, 3, 3, 4}) << std::endl;
    return 0;
}
