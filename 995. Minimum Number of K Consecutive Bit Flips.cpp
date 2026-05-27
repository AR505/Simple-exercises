#include <vector>

class Solution {
public:
    int minKBitFlips(std::vector<int>& nums, int k) {
        int n = nums.size();
        int currentFlips = 0;
        int totalFlips = 0;

        for (int i = 0; i < n; i++) {
            if (i >= k && nums[i - k] > 1) {
                currentFlips--;
                nums[i - k] -= 2;
            }

            if ((nums[i] + currentFlips) % 2 == 0) {
                if (i + k > n) {
                    return -1;
                }

                currentFlips++;
                totalFlips++;
                nums[i] += 2;
            }
        }

        return totalFlips;
    }
};
