#include <iostream>
#include <vector>

class Solution {
public:
    static int minimumTotal(const std::vector<std::vector<int>> &triangle) {
        std::vector<int> pathsSum(triangle.back());

        for (int i = triangle.size() - 2; i >= 0; i--) {
            for (int j = 0; j <= i; j++) {
                pathsSum[j] = std::min(pathsSum[j], pathsSum[j + 1]) + triangle[i][j];
            }
        }

        return pathsSum[0];
    }
};

int main() {
    std::cout << Solution::minimumTotal({{2},
                                         {3, 4},
                                         {6, 5, 7},
                                         {4, 1, 8, 3}}) << std::endl;
    return 0;
}
