#include <iostream>
#include <vector>

class Solution {
public:
    static unsigned int jump(const std::vector<int> &nums) {
        if (nums.size() == 1) {
            return 0;
        }

        unsigned int numsLen = nums.size() - 1;

        for (unsigned int i = 0, curJumpEnd = 0, jumpEndMax = 0, jumpsCount = 0; i < numsLen; i++) {
            jumpEndMax = std::max( i + nums[i], jumpEndMax);
            if (i == curJumpEnd) {
                jumpsCount++;
                curJumpEnd = jumpEndMax;
                if (curJumpEnd >= numsLen) {
                    return jumpsCount;
                }
            }
        }

        return 0;
    }
};

int main() {
    std::cout << Solution::jump({2, 3, 1, 1 ,4}) << std::endl;
    return 0;
}
