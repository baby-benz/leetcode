#include <iostream>
#include <vector>

class Solution {
public:
    static int singleNumber(const std::vector<int> &nums) {
        int ans = 0;

        for (int num: nums) {
            ans ^= num;
        }

        return ans;
    }
};

int main() {
    std::cout << Solution::singleNumber({4, 1, 2, 1, 2}) << std::endl;
    return 0;
}
