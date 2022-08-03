#include <iostream>
#include <vector>

class Solution {
public:
    static bool canJump(const std::vector<int> &nums) {
        if (nums.size() == 1) {
            return true;
        }

        unsigned int numsLen = nums.size() - 1;

        for (unsigned int i = 0, curJumpDist, jumpDistMax = 0; i < nums.size() && i <= jumpDistMax; i++) {
            curJumpDist = i + nums[i];
            jumpDistMax = std::max(curJumpDist, jumpDistMax);
            if (curJumpDist >= numsLen) {
                return true;
            }
        }

        return false;
    }
};

int main() {
    std::cout << Solution::canJump({1, 3, 2}) << std::endl;
    return 0;
}
