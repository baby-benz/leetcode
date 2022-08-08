#include <iostream>
#include <vector>

class Solution {
public:
    static unsigned int maxSubArray(const std::vector<int> &nums) {
        int curMax, max;
        max = curMax = nums[0];

        for (unsigned int i = 1; i < nums.size(); i++) {
            curMax = std::max(nums[i] + curMax, nums[i]);
            max = std::max(max, curMax);
        }

        return max;
    }
};

int main() {
    std::cout << Solution::maxSubArray({-2, 1, -3, 4, -1, 2, 1, -5, 4}) << std::endl;
    return 0;
}
