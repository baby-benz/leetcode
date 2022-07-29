#include <iostream>
#include <vector>

class Solution {
public:
    static unsigned int rob(const std::vector<int> &nums) {
        if (nums.size() == 1) {
            return nums[0];
        }

        return std::max(rob(nums, 0, nums.size() - 1), rob(nums, 1, nums.size()));
    }

private:
    static unsigned int rob(const std::vector<int> &nums, const unsigned int start, const unsigned int end) {
        unsigned int prevMax = 0, curMax = 0;

        for (unsigned int i = start; i < end; i++) {
            unsigned int tmp = curMax;
            curMax = std::max(prevMax + nums[i], curMax);
            prevMax = tmp;
        }

        return curMax;
    }
};

int main() {
    std::cout << Solution::rob({2, 7, 9, 3, 1}) << std::endl;
    return 0;
}
